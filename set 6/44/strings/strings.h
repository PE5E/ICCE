#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t              d_size;    // number of stored strings
    size_t      d_capacity = 1;    // number of strings that can be stored
    std::string   **d_arrayStr = nullptr;    // pointer to pointers of string data

    public:
        struct POD
        {
            size_t       size;
            std::string **str;
        };

        Strings();
        ~Strings();                                 
        Strings(int argc, char *argv[]);
        Strings(char *environLike[]);
        Strings(std::istream &in);

        void swap(Strings &other);              

        size_t size() const;
        std::string **const data() const;
        POD release();

        std::string const &at(size_t idx) const;      // for const-objects
        std::string &at(size_t idx);                  // for non-const objects

        void add(std::string const &next);            // add another element

        size_t const capacity() const;                // return allocated memory in nr of strings

        void reserve(size_t const newCapacity);       // reserves memory to new size 

        void resize(size_t const newCapacity);        // resizes and initializes 


    private:
        void fill(char *ntbs[]);                      // fill prepared d_str

        std::string &safeAt(size_t idx) const;        // private backdoor

        void destroy();                 

        static size_t count(char *environLike[]);     // # elements in env.like



        std::string** rawPointers(size_t nrPointers); // creates initialized array of 
                                                      // pointers to strings       
};

inline size_t Strings::size() const                   // potentially dangerous practice:
{                                                     // inline accessors
    return d_size;
}


inline std::string **const Strings::data() const
{
    return d_arrayStr;     
}

inline std::string const &Strings::at(size_t idx) const
{
    return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    return safeAt(idx);
}

        
#endif

