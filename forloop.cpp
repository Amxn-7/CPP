#include <iostream>
using namespace std;
int main(){
    int mynumber[] = {4,5,6,7,8};
    for(int i = 0; i<5 ; i++){
        cout << mynumber[i] << endl;
    }
    printf("Get a Break");
    for(int i : mynumber){
        cout << i << endl;
    }

return 0;
}