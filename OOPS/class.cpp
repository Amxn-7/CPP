#include <iostream>
#include <string>
using namespace std;

class User{
    int secret = 22;
    public:
    string name = "default";
    void classmessage(){
        cout << "Class is geart"<< name << endl;
    }
};


int main(){
    User sam;
    sam.name = "Sam";
    sam.classmessage();

    User hitesh;
    hitesh.classmessage();
    hitesh.name = "hitesh";
    hitesh.classmessage();

return 0;
}