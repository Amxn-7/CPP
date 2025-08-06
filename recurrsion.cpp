#include <iostream>
int factorial(int n);
using namespace std;
int main(){
    int n;
    cout << "Enter the value: ";
    cin >> n;
    cout << "Your result for factorial is " << factorial(n) << endl; 
return 0;
}
int factorial(int n){
    if(n>1){
        return n * factorial(n-1);
    }else{
        return 1;
    }
}