#include <iostream>
using namespace std;
int main(){
    char mystring[]= "aman";
    char myname[] = {'a', 'm', 'a', 'n', 0};
    printf("My name is: %s\n" , mystring);
    printf("Take a break\n");
    for(int i = 0; myname[i] !=0; i++ ){
        cout << "Character is :" << myname[i] <<endl;
    }
    printf("Break\n");
       for(char *cp = myname; *cp !=0; cp++ ){
        cout << "Character is :" << *cp <<endl;
    }
    printf("Break 3\n");
    for(char i :myname){
        if(i==0)break;
        cout << "char is " << i << endl;
    }
return 0;
}