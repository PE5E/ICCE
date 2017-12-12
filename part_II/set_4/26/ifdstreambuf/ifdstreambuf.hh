#ifndef __INCLUDED_IFDSTREAMBUF_H
#define __INCLUDED_IFDSTREAMBUF_H

#include <streambuf>

class IFdStreambuf: public std::streambuf
{
    public:
        enum Mode
        {
            CLOSE_FD,
            KEEP_FD,
        };
    private:
        static const size_t s_SIZE = 100; 

        char  *d_buffer;
        int    d_fd;
        Mode   d_mode;
    public:
        explicit IFdStreambuf(Mode mode = KEEP_FD);
        explicit IFdStreambuf(int fd, Mode mode = KEEP_FD);

        ~IFdStreambuf();

        IFdStreambuf(IFdStreambuf const &other)             = delete;
        IFdStreambuf &operator=(IFdStreambuf const &other)  = delete;

        void open(int fd, Mode mode = KEEP_FD);
        void close(); 
    private:
        std::streamsize xsgetn(char *file, std::streamsize requestSize);

        void clean();

}; // IFdstreambuf

#endif

