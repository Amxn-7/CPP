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
    void setsecret( const int &newsecret){
        secret = newsecret;
    }
    int getsecret(){
        return secret;
    }

};


int main(){
    User sam;
    sam.name = "Sam";
    sam.classmessage();
    sam.setsecret(333); 
    cout << sam.getsecret() << endl;
    User hitesh;
    hitesh.classmessage();
    hitesh.name = "hitesh";
    hitesh.classmessage();

return 0;
}