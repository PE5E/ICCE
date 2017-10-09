#include "user.ih"                          // pwent, using cin, cout, string

// the default constructor determines
// the current users data
                                            // default constructor
User::User()
    :					                    // member initializer
        d_valid(true)			            // successfull construction
{   
    d_userId = geteuid();                   // identify current user
    passwd *pw = getpwuid(d_userId);        // passwd file for current user

    d_name = string(pw->pw_name);           
    d_groupId  = pw->pw_gid;                
    d_homeDir = string(pw->pw_dir);
    d_realName = string(pw->pw_name);
    d_shell = string(pw->pw_shell);
  
    // cout << d_name << '\n';
    // cout << d_groupId << '\n';
    // cout << d_homeDir << '\n';
    // cout << d_realName << '\n';
    // cout << d_shell << '\n';
    // cout << d_userId << '\n';
}
