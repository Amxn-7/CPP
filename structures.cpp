#include <iostream>
using namespace std;
struct user
{
    const int uid;
    const char *name;
    const char *email;
    int course_count;
};

int main(){
    user mickey = {001,"mickey", "ammama@gmail.com" , 2};
    user aman = {001,"amman", "amma@gmail.com" , 6};
    cout << aman.email << endl;
    aman.course_count = 4;
    cout << aman.course_count << endl;

    
return 0;
}