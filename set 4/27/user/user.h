#ifndef INCLUDED_USER_
#define INCLUDED_USER_

#include <string>
using std::string;

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
        User();	    			               
        bool valid()                const;      
        bool inGroup(size_t gid)    const;    
        size_t userId()             const;
        size_t groupId()            const;
        string homeDir()            const;
        string name()               const;
        string realName()           const;
        string shell()              const;
    private:                				    
};

inline bool   User::valid()    const { return d_valid; }
inline size_t User::groupId()  const { return d_groupId; }
inline string User::homeDir()  const { return d_homeDir; }
inline string User::name()     const { return d_name; }
inline string User::realName() const { return d_realName; }
inline string User::shell()    const { return d_shell; }
inline size_t User::userId()   const { return d_userId; }

#endif
