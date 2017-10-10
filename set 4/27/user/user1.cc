#include "user.ih"                          // pwent, using cin, cout, string

User::User()
    :
        d_valid(false)
{   
    d_userId = geteuid();                   // identify current user
    passwd *pw = getpwuid(d_userId);        // passwd file for current user

    d_name = string(pw->pw_name);           
    d_groupId  = pw->pw_gid;                
    d_homeDir = string(pw->pw_dir);
    d_realName = string(pw->pw_name);
    d_shell = string(pw->pw_shell);
  
    d_valid = true;
}

// the default constructor determines
// the current users data
