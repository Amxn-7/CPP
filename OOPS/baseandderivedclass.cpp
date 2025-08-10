#include <iostream>
#include <string>
using namespace std;
class Man{
    string _name;
    int _age;
    Man(){}
protected:
    Man(const string &name, const int &age): _name(name),  _age(age){}
    void run(){
        puts("I can Run");
    }
public:
    void sayname() const;

};
void Man::sayname()const{
    cout << "My name is: "<< _name << endl;
}
// superman
class Superman : public Man{
    bool flight;
public:
    Superman(string name): Man(name, 26){};
    void run(){
        puts("I can Run at speed of light");
    }
};
int main(){
    Superman clark("Kent");
    clark.sayname();
    clark.run();
return 0;
}