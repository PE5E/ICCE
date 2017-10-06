#ifndef INCLUDED_USER_
#define INCLUDED_USER_


class User
{
    public:
        User();
        bool valid() const;         // read d_valid

    private:
        bool d_valid = false;
};
        
#endif
