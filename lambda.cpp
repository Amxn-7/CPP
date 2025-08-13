#include <iostream>
#include <string> 
using namespace std;
int main(){
    []{cout << " Hello Learncodeonline.in\n";}();
    [](){return 100;};

    auto sum = [](auto a, auto b){return a+b;};
    cout << "Sum of 2 and 5 is : "<< sum(2,5.5) << endl;
    string a = "abc";
    string b = "def";
    cout << sum(a,b) << endl;
return 0;
}