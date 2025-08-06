#include <iostream>
using namespace std;
int gettwo(){
    return 2;
}
void interesting(){
    puts ("I am interesting");
}
int main(){
    int whatigot = gettwo();
    void (*pointstointeresting)() = interesting;
    cout << whatigot << endl;
    pointstointeresting();
    (*pointstointeresting)();
return 0;
}