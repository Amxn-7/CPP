#include <iostream>
using namespace std;
int lifeup(){
    static int life = 3;
    return life = life +3;
}
int main(){
    // const
    // volatile
    // mutable 
    int life = 3;
    cout << "Your starting game life is"<< life <<endl; 
    life = lifeup();
    printf("Your updated game life is %d\n", life);
    life = lifeup();
    printf("Your updated game life is %d\n", life);


return 0;
}