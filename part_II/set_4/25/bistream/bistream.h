#ifndef __INCLUDED_BISTREAM_H
#define __INCLUDED_BISTREAM_H

#include <iostream>
#include <ios>

class BiStream: public std::ostream
{
    class BiStreamBuffer: public std::streambuf
    {
        std::streambuf *d_buffer1;
        std::streambuf *d_buffer2;

        public:

            BiStreamBuffer(std::streambuf *one, std::streambuf *two)
                :
                    d_buffer1(one),
                    d_buffer2(two)
            {
            }

            virtual int overflow(int c)
            {
                d_buffer1->sputc(c);
                d_buffer2->sputc(c);
                return c;
            }
    };

    BiStreamBuffer d_buffer;

    public:

        BiStream(std::ostream &one, std::ostream &two)
            :
                d_buffer(one.rdbuf(), two.rdbuf())         // construct
        {
            std::ostream::rdbuf(&d_buffer);                // associate 
        }
};

#endif
