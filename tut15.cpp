#include <iostream>
using namespace std;

//function prototype ---->it is a decleration of a function which tells the complier the function's type,
//name,parameters/arguments
//basically it readys compiler about the function is going to be used that's why called as function prototype
//syntax:
//type function_name (arguments);
// int sum(int,int); ------> Acceptable
//int sum(inta,b); ------> Not Acceptable
//int sum(int a,int b); ------> Acceptable
int sum(int a,int b);

int main(){
    int num1,num2;
    cout<<"Enter the value of num1:";
    cin>>num1;
    
    cout<<"enter the value of num2:";
    cin>>num2;
   
    cout<<"The sum of num1 and num2 is:"<<sum(num1,num2)<<endl;//here (num1,num2) are actual parameters
    //these values are passed into the function /values being passed into the function
    return 0;
}
int sum(int a,int b){
    //formal parametrs------> are defined in the fuction or used for in function only 
    int c=a+b;
    return c;
}