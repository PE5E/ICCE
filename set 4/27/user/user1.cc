#include "user.ih"

User::User()
    :
        d_valid(false)
{   
    d_userId = geteuid();                   // current user
    passwd *pw = getpwuid(d_userId);        // passwd file 

    d_name = string(pw->pw_name);           
    d_groupId  = pw->pw_gid;                
    d_homeDir = string(pw->pw_dir);
    d_realName = string(pw->pw_name);
    d_shell = string(pw->pw_shell);
  
    d_valid = true;                         // succes
}
