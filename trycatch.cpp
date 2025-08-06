#include <iostream>
using namespace std;
int main(){
    int callapi = 2;
    try{
        cout << "trying to use api value\n";
        cout << "did some testing with api value\n";
        throw callapi;
        cout << "No code execute after return and throw\n";


    }catch(int x){
        cout << "integer exception handled\n";

    }
    printf("Keep on moving with rest of code\n");
return 0;
}