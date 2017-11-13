#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_


class demo
{
    public:
        demo();                                  // constructor
        demo(demo const &other);                 // copy constructor
        demo(demo &&tmp);                        // move constructor
        ~demo();                                 // destructor
        demo &operator=(demo const &other);      // overload copy
        demo &operator=(demo &&tmp);             // overload move
        void swap(demo &other);         
    private:
};
        
#endif
