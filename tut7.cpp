#include<iostream>
using namespace std;
int c=5;
int main(){
    //*****************BUILT IN DATA TYPES****************
    // int a,b,c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"the sum of a and b is:"<<c<<endl;
    // cout<<"the global value of c is:"<<::c<<endl;//where :: is a scope resolution operator which is used to access the global variable
    
    //*****************float ,double and  long double literals****************
    // float d=34.4f;
    // long double e=34.4l;
    // cout<<"the value of d is:"<<d<<endl<<"the value of e is:"<<e<<endl;
    // cout<<endl;
    // cout<<"the size of 34.4 is:"<<sizeof(34.4)<<endl;//in c++ by default it is considered as double
    // cout<<"the size of 34.4f is:"<<sizeof(34.4f)<<endl;
    // cout<<"the size of 34.4F is:"<<sizeof(34.4F)<<endl;
    // cout<<"the size of 34.4l is:"<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4L is:"<<sizeof(34.4L)<<endl;

    //*****************Reference Variables****************
    // shubham----->shubh------>bbs
    // float x=455;
    // float & y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //*****************Typecasting****************
    int a=45;
    float b=45.46;
    cout<<"the value of a is:"<<float(a)<<endl;
    cout<<"the value of b is:"<<int(b)<<endl;
    cout<<"the value of b is:"<<double(b)<<endl;
    
    return 0;
}