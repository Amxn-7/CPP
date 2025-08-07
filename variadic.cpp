#include <iostream>
#include <string>
using namespace std;
template <typename T>
void func(T t){
    cout<<"One func "<<t<<endl;
}
template<typename T, typename... Args>
void func(T t, Args...args){
    cout <<" Two func"<<  t << endl;
    func(args...);
    
} 
int main(){
    string myname = "Hitesh";
    func(myname);
    func(1,2,3.4,4.5, myname); 
return 0;
}