//There are two types of header files
//1. System header files: It comes with the compiler
#include <iostream>
//2. User defined header files: It is written by the programmer
// #include "this.h" //This will produce an error if this.h is not present in the current directory
using namespace std;
int main(){
    cout<<"Operators in c++:"<<endl;
    cout<<"Following are the types of operators in c++:"<<endl;
    //Arithmetic operators
    int a=4,b=5;
    cout<<"The value of a+b is:"<<a+b<<endl;
    cout<<"The value of a-b is:"<<a-b<<endl;
    cout<<"The value of a*b is:"<<a*b<<endl;
    cout<<"The value of a/b is:"<<a/b<<endl;//This will give only integer value as both a&b are int 
    cout<<"The value of a%b is:"<<a%b<<endl;
    cout<<"The value of a++ is:"<<a++<<endl;
    cout<<"The value of a-- is:"<<a--<<endl;
    cout<<"The value of ++a is:"<<++a<<endl;
    cout<<"The value of --a is:"<<--a<<endl;
    cout<<endl;
    //Assignment operators
    int c=3,d=4;//basically used to assign values to the variables
    char e='e';
    //comparison operators
    cout<<"the value of (a==b) is:"<<(a==b)<<endl;
    cout<<"the value of (a>b) is:"<<(a>b)<<endl;
    cout<<"the value of (a<b) is:"<<(a<b)<<endl;
    cout<<"the value of (a>=b) is:"<<(a>=b)<<endl;
    cout<<"the value of (a<=b) is:"<<(a<=b)<<endl;
    cout<<"the value of (a!=b) is:"<<(a!=b)<<endl;
    cout<<endl;
    //Logical operators
    cout<<"the value of ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"the value of ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"the value of (!(a==b)) is:"<<(!(a==b))<<endl;
    return 0;

}