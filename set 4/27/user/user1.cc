#include "user.ih"

                                        // default constructor
User::User()
    :
        d_valid();
{
    cout << "Created user." << '\n';
    d_valid = true;                     // confirm valid user was created
}
