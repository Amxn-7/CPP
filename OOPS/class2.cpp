// #include <iostream>
// #include <string>
// using namespace std;

// class User{
//     int secret = 22;
//     public:
//     string name = "default";
//     void classmessage(){
//         cout << "Class is geart"<< name << endl;
//     }
//     void setsecret( const int &newsecret){
//         secret = newsecret;
//     }
//     int getsecret() const{
//         return secret;
//     }

// };
 
// int main(){
//     User sam;
//     sam.name = "Sam";
//     sam.classmessage();
//     sam.setsecret(333); 
//     cout << sam.getsecret() << endl;
//     User hitesh;
//     hitesh.classmessage();
//     hitesh.name = "hitesh";
//     hitesh.classmessage();
//     const User rock;
//     cout << rock.getsecret() << endl;
//     User peter = sam;
//     cout << peter.getsecret() << endl;
    
// return 0;
// }



#include <iostream>
#include <string>

using namespace std;
class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;
public:
    Phone();
    Phone(const Phone &);
    Phone(const string &name, const string os, const int &price);
    // Phone(const Phone &); //copy constructer
    string getName(){return _os;}
    ~Phone(); //destructor
};
Phone::Phone() : _name(), _os("Andy"), _price(){
    puts("Default constructor");
}
Phone::Phone(const string &name, const string os, const int &price) : _name(name) , _os(os), _price(price){
    puts("Default constructor");
}
Phone::Phone(const Phone & values){
    puts("Overwrite copy constructor");
    _name = "new-" + values._name;
    _os = "skinned-" + values._os;
    _price = values._price;

}
Phone::~Phone(){
    printf("Destructor called for %s\n", _name.c_str());
}
int main(){
    Phone samsungA1;
    cout << samsungA1.getName() << endl;
    Phone Oneplus("OP8", "Android", 799);
    cout << Oneplus.getName() << endl;
  
    Phone Oneplus8S = Oneplus;
    cout << Oneplus8S.getName() << endl;
  return 0;
}