// Prime number computation by Erwin Unruh
// Rewritten to run on C++11 by Frank Brokken

// To let the program generate all prime numbers up to the value 25, run it as
//      g++ --std=c++0x -DLAST=25 primefrank.cc |& grep 'instantiation of'
// of course, to get another value specify that value instead of 25.
// Alternatively, use this script to beautify the output:

// #!/bin/bash
// 
// 
// if [ $# -eq 0 ] ; then
//     last=25
// else
//     last=$1
// fi
// 
// if [ $# -gt 1 ] ; then
//     g++ --std=c++0x -DLAST=${last} primefrank.cc | less
// else
//     g++ --std=c++0x -DLAST=${last} primefrank.cc |& 
//         grep 'instantiation of' | sed 's/ instantiation of//'
// fi


#ifndef LAST
#define LAST 18
#endif

enum 
{
    IS_PRIME,
    NO_PRIME,
    CONTINUE  
};

template <int candidate, int testValue>
struct Eval
{
    enum
    { 
        mode = 
            testValue * testValue > candidate ? IS_PRIME  :    
            candidate % testValue == 0 ?        NO_PRIME  :
                                                CONTINUE
    };
};

template <int candidate, int prime, int mode >
struct sieve
{
    enum 
    { 
        next = prime + 1,
        isPrime = sieve<candidate, next, Eval<candidate, next>::mode>::isPrime
    };
};

template <int candidate, int prime> 
struct sieve<candidate, prime, IS_PRIME>
{
    enum { isPrime = IS_PRIME };
};

template <int candidate, int prime>
struct sieve<candidate, prime, NO_PRIME >
{
    enum { isPrime = NO_PRIME };
};

template <int prime>
struct test
{
    enum {isPrime = sieve<prime, 2, Eval<prime, 2>::mode>::isPrime };
};

template <int prime, int isPrime>
struct show
{                           
    static void f()
    {
        show<prime - 1, test<prime - 1>::isPrime >::f();
    }
};

template <int prime>
struct show<prime, IS_PRIME>
{
    static int *f()
    {
        show<prime - 1, test<prime - 1>::isPrime >::f();

        int x;
        return &x;
    }
};

template <>
struct show<1, IS_PRIME>
{
    static void f()
    {}
};

template <int prime>
void primes()
{
    show<prime, test<prime>::isPrime>::f();
}

main() 
{
        // weird messages make sense because of the suggested grep command
    static_assert(LAST >= 2, 
        "instantiation of LAST must be >= 2");
    
    primes<LAST>();

    static_assert(0, 
        "instantiation of compilation terminated");
}

