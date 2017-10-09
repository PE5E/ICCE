#ifndef INCLUDED_USER_
#define INCLUDED_USER_
#include "user.ih"                              // internal header; using cout, cin, string

class User
{           			                	
    bool    d_valid;    	                    // construction succes
    size_t  d_groupId;
    string  d_homeDir;
    string  d_name;
    string  d_realName;
    string  d_shell;
    size_t  d_userId;

    public:	        	                		
        User();	    			                // default constructor
        bool valid()                const;      // read
        bool inGroup(size_t gid)    const;
        size_t userId()             const;
        size_t groupId()            const;
        string homeDir()            const;
        string name()               const;
        string realName()           const;
        string shell()              const;
    private:                				    
};

                                                // inline member functions
bool   User::valid()    const { return d_valid; }
size_t User::groupId()  const { return d_groupId; }
string User::homeDir()  const { return d_homeDir; }
string User::name()     const { return d_name; }
string User::realName() const { return d_realName; }
string User::shell()    const { return d_shell; }
size_t User::userId()   const { return d_userId; }

bool   inGroup(size_t gid)                      // sep
{
    cout << gid << '\n';
    return true;
}
        
#endif
