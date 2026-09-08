#include <iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}

//this will not swap the vlaues
// void swap(int x,int y){
//     int temp=x;      //temp a b 
//     x=y;             //a    4 5
//     y=temp;          //4    5 5
// }                    //4    5 4

//this will swap the values
//call by reference using pointers
void SwapPointer(int* x,int* y){
    int temp=*x;      //temp a b 
    *x=*y;             //a    4 5
    *y=temp;          //4    5 5
}                     //4    5 4

//call by reference using C++ reference variables
void SwapReferenceVariable(int &x,int &y){
    int temp=x;      //temp a b 
    x=y;             //a    4 5
    y=temp;          //4    5 5
}                    //4    5 4

int main(){
    int a=4,b=5;
    // cout<<"the sum of value of 4 and 5 is:"<<sum(4,5)<<endl;
    
    // SwapPointer(&a,&b); //by reference pointer
    SwapReferenceVariable(a,b);
    cout<<"the swap of value of a and b is:"<<a<<","<<b<<endl;

    return 0;
}