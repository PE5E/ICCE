#include "user.ih"          					

int main()
{
    User currentUser;
    								// test all member functions except inGroup
    cout << "valid: " << currentUser.valid() << '\n';
    cout << "user id: " << currentUser.userId() << '\n';
    cout << "group id: " << currentUser.groupId() << '\n';
    cout << "homedir: " << currentUser.homeDir() << '\n';
    cout << "username: " << currentUser.name() << '\n';
    cout << "real name: " << currentUser.realName() << '\n';
    cout << "shell: " << currentUser.shell() << '\n';
}
