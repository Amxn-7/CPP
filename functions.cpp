#include <iostream>
using namespace std;
void sayhello(){
    puts("Hello there");

}
int saytwo(){
    // puts("2");
    return 2; 
}
void saythree(){
    puts("Three");
}
int main(){
    sayhello();
    printf("%d\n", saytwo());
    saythree();


return 0;
}


