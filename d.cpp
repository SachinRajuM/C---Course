#include <iostream>
using namespace std;

typedef struct employee
    {
        int eId;
        char favchar;
        float salary;
    }ep;

union money
    {
        int rice;
        char car;
        float pound;
    }m1,m2;
enum fruit
{
    apple,
    banana,
    grapes
}f1,f2;


int main() {
    // struct is an datatype used to store different datatypes 
    
    ep harry;
    harry.eId=10;
    harry.favchar='c';
    harry.salary=1200000000;    

    // cout<<"The value of:"<<harry.eId<<endl;
    // cout<<"The value of:"<<harry.favchar<<endl;
    // cout<<"The value of:"<<harry.salary<<endl;
    union money m1;
    m1.car='A';
    // cout<<m1.car<<endl;
    f1=grapes;
    cout<<(f1==2);
    return 0;
}