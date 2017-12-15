#ifndef __INCLUDED_OFDSTREAMBUF_H
#define __INCLUDED_OFDSTREAMBUF_H

#include <streambuf>

class OFdStreambuf: public std::streambuf
{
    public:
        enum Mode
        {
            CLOSE_FD,
            KEEP_FD,
        };
    private:
        static const size_t s_SIZE = 100;

        char   *d_buffer;
        int     d_fd;
        Mode    d_mode;
    public:
        explicit OFdStreambuf(Mode mode = KEEP_FD);
        explicit OFdStreambuf(int fd, Mode mode = KEEP_FD);
        OFdStreambuf(OFdStreambuf const &other)             = delete;


        ~OFdStreambuf();

        OFdStreambuf &operator=(OFdStreambuf const &other)  = delete;

        void open(int fd, Mode mode = KEEP_FD);
        void close();

    private:
        int sync() override;
        int overflow(int c) override;
        
        void clean();
};

#endif 

// this class was 'inspired' by the C++ Annotations, ch. 24, and bobcat. 
