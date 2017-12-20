#ifndef INCLUDED_BOBCAT_EXCEPTION_
#define INCLUDED_BOBCAT_EXCEPTION_

#include <string>
#include <sstream>
#include <exception>
#include <thread>
#include <iosfwd>

namespace FBB
{

extern thread_local int g_errno;

class Exception: public std::exception
{
    template <typename Type>
    friend Exception &&operator<<(Exception &&tmp, Type const &value);

    std::string d_what;
    
    public:
        enum 
        {
            STRERROR_BUFSIZE = 100
        };

        enum Protection
        {
            ANY,
            EQUAL
        };

        Exception();                                        // exception.f
        explicit Exception(int errnoValue);                 // exception1.cc

        ~Exception() noexcept(true) override;

        static size_t protection(std::string const &name, size_t protect, 
                          Protection type = EQUAL);

        template <typename StreamType>
        static void open(StreamType &stream,                    // open1.f
                         std::string const &name);

        template <typename StreamType>
        static void open(int errnoValue, StreamType &stream,    // open2.f
                         std::string const &name);

        template <typename StreamType>
        static void open(StreamType &stream,                    // open3.f
                            std::string const &name, std::ios::openmode mode);

        template <typename StreamType>
        static void open(int errnoValue, StreamType &stream,    // open4.f
                            std::string const &name, std::ios::openmode mode);
    private:
        char const *what() const noexcept(true) override;
};

inline Exception::Exception()
{
    g_errno = 0;
}

template <typename StreamType>
void Exception::open(StreamType &stream, std::string const &name)
{
    if (stream.is_open())
        stream.close();

    stream.open(name);
    if (!stream)
        throw Exception() << "Can't open `" << name << '\'';
}

template <typename StreamType>
void Exception::open(int errnoValue, StreamType &stream, 
                     std::string const &name)
{
    if (stream.is_open())
        stream.close();

    stream.open(name);
    if (!stream)
        throw Exception(errnoValue) << "Can't open `" << name << '\'';
}

template <typename StreamType>
void Exception::open(StreamType &stream, std::string const &name,
                                         std::ios::openmode mode)
{
    if (stream.is_open())
        stream.close();

    stream.open(name, mode);
    if (!stream)
        throw Exception() << "Can't open `" << name << '\'';
}

template <typename StreamType>
void Exception::open(int errnoValue, StreamType &stream, 
                        std::string const &name, std::ios::openmode mode)
{
    if (stream.is_open())
        stream.close();

    stream.open(name, mode);
    if (!stream)
        throw Exception(errnoValue) << "Can't open `" << name << '\'';
}


    // Free functions

std::ostream &errnodescr(std::ostream &out);

template <typename Type>
inline Exception &&operator<<(Exception &&tmp, Type const &value)
{
    std::ostringstream out;
    out << value;
    tmp.d_what += out.str();

    return std::move(tmp);
}
           // Exception << Type

} // FBB

   
#endif

