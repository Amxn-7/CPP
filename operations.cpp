// #include <iostream>
// using namespace std;
// int main(){
//     int life = 3;
//     int points = 4;
//     int score = 2;
//     score = score + points; 
//     if(life!=0){

//     }
    
// return 0;
// }


#include <iostream>
using namespace std;
int main(){
    bool isfbuser = false;
    bool isgoogleuser = true;
    bool isadmin = true;
    if ((isfbuser|| isgoogleuser) && isadmin){
        puts("Welcome admin");

    }else{
        puts("No admin access!");
    }

    // if(isfbuser||isgoogleuser){
    //     puts("Welcome user");
    // }
return 0;
}