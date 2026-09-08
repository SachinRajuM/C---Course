
#include <iostream>
using namespace std;

int main(){
    // what is a pointer? ----> it is a datatype which holds the address of other datatypes
    int a=3;
    int *b=&a; // pointer b is holding the address of a
    // &----> (address of) operator
    cout<<"the address of a is:"<<&a<<endl;
    cout<<"the address of a is:"<<b<<endl;
    // *----> (value at) dereference operator
    cout<<"the value at address b is:"<<*b<<endl;

    //pointer to pointer
    int **c=&b;
    cout<<"the address of b is:"<<&b<<endl;
    cout<<"the address of b is:"<<c<<endl;
    cout<<"the value of address of a is:"<<*c<<endl;//gives the address
    cout<<"the value at address of c is:"<<**c<<endl;//gives the value of a-->3

    return 0;
}