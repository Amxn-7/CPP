#include <iostream>
#include <string>
#include <memory>
using namespace std;
class User{
    public:
    User(){
        cout << "User created\n";
    }
    ~User(){
        cout << "User deleted\n";
    }
    void testfunc(){
        cout << "I am a test function\n ";
    }
};
int main(){
    {
        // unique_ptr<User> sam(new User());
        unique_ptr<User> sam  = make_unique<User>();
        sam->testfunc();
        cout << "outside code\n";
    }
    {
        shared_ptr<User> tim = make_shared<User>();
        shared_ptr<User> timm = tim;
    }
return 0;
}