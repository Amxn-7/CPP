// #include <iostream>
// using namespace std;
// int main(){
//     int mynumber[] = {4,5,6,7,8};
//     int i = 0;
//     while(i<=4){
//         cout << "Correct number is :" << mynumber[i] <<endl;
//         i++;
//     }
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int mynumber[] = {4,5,6,7,8};
//     int i = 0;
//     while(i<=4){
//         if(i==3){
//             break;// printf("Special thing \n");
//         }
//         cout << "Correct number is :" << mynumber[i] <<endl;
//         i++;
//     }
//     printf("Outside of loop");
// return 0;
// }


#include <iostream>
using namespace std;
int main(){
    int mynumber[] = {4,5,6,7,8};
    int i = 0;
    do{
        cout << "Correct number is :" << mynumber[i] <<endl;
        i++;
    }while(i<=4);
return 0;
}