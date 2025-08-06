#include <iostream>
using namespace std;
int main(){
    int *myp;
    try
    {
        myp = new int[10000];
    cout << "Memory space allocatio\n" << endl;
    }
    catch(...)
    {\
        cout << "failed in allocation\n";
    }
    int x = 5;
    x << 3;
    delete [] myp;
    
return 0;
}