#include<iostream>
#include<iomanip>//for setw()

using namespace std;
int main(){
    //int a=34;//same can be done for characters,float etc
    // cout<<"the value of a was:"<<a<<endl;
    // a=45;
    // cout<<"the value of a is:"<<a<<endl;

    //constant in c++:
    // const int a=3;
    // cout<<"The value of a is:"<<a<<endl;
    // // a=5;//this will give an error as a is constant and cannot be changed

    //manipulators in c++:
    // int a=3,b=78,c=1233;
    // cout<<"the value of a is:"<<a<<endl;
    // cout<<"the value of b is:"<<b<<endl;
    // cout<<"the value of c is:"<<c<<endl;
    // cout<<endl;
    // cout<<"the value of a is:"<<setw(4)<<a<<endl;
    // cout<<"the value of b is:"<<setw(4)<<b<<endl;
    // cout<<"the value of c is:"<<setw(4)<<c<<endl;

    //operator precedence in c++:
    int a=3,b=4;
    int c=((((a*5)+b)-45)+87);
    cout<<"the value of c is:"<<c<<endl;

    return 0;
}