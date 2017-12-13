#ifndef __INCLUDED_OFDSTREAMBUF_H
#define __INCLUDED_OFDSTREAMBUF_H

class OFdStreambuf: public std::streambuf
{
    public:
        enum Mode
        {
            CLOSE_FD,
            KEEP_FD,
        };
    private:
        static const s_SIZE = 100;

        char   *d_buffer;
        int     d_fd;
        Mode    d_mode;
    public:
        explicit OFdStreambuf(Mode mode = KEEP_FD);
        explicit OFdStrambuf(int fd, Mode mode = KEEP_FD);

        ~OFdStreambuf();

        OFdStreambuf(OFdStreambuf const &other)             = delete;
        OFdStreambuf &operator=(OFdStreambuf const & ohter) = delete;

        void open(int fd, Mode mode = KEEP_FD);
        void close();

        void pSync(); 
    private:
        void sync();
        void clean();
}

#endif 

// should be same:
//          open
//          close
//          clean
//          destructor
//          constructor 1
//          constructor 2
//          
// new:
//          sync()
//          pSync
//          <mysterious xsputn?>
//
