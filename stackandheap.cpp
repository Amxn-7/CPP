#include <iostream>
using namespace std;
struct user
{
    const int id;
    int age;
    user() : id(001), age(22){};
};

int main(){
    // stack
    int score = 100;
    user mike;

    // heap
    int *heapscore = new int;
    *heapscore = 200;
    user* nike = new user();
    delete heapscore;
    delete nike;
    return 0;
}