#include <iostream>
using namespace std;

int main(){
    // array is a collection of similar data types which are stored in contigous memory locations
    // Array example
    int marks[4]={23,45,56,89};

    int mathmarks[4];
    mathmarks[0]=34;
    mathmarks[1]=45;
    mathmarks[2]=56;
    mathmarks[3]=67;

    cout<<"these are math marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    //you can also update the value in an array
    marks[2]=455; // updating the value at index 2

    cout<<"these are marks"<<endl;
    // cout<<marks[0]<<endl;    
    // cout<<marks[1]<<endl;    
    // cout<<marks[2]<<endl;    
    // cout<<marks[3]<<endl;

    // for(int i=0;i<4;i++){
    //     cout<<marks[i]<<endl;
    // }
    // quiz do the same thing using while loop and do while loop

    //while loop
    // int i=0;
    // while(i<4){
    //     cout<<marks[i]<<endl;
    //     i++;
    // }

    // do while loop
    // int i=0;
    // do{
    //     cout<<marks[i]<<endl;
    //     i++;
    // }while(i<4);
    
    //pointer arithmetic -----> address(new)=address(current)+i*sizeof(datatype)
    int *p=marks;//if we call marks it will give the address of first element of array
    // cout<<p<<endl;
    // cout<<marks<<endl;
    // // cout<<++p<<endl; // it will give the address of next element of array
    // cout<<(p+1)<<endl;
    // cout<<sizeof(p+1)<<endl; // it will give the size of pointer variable
    // cout<<(p+1*4)<<endl; // it will give the address of next element of array

    //pointers and array
    cout<<*(p++)<<endl; // it will give the value of first element of array and then increment the pointer to next element
    cout<<*p<<endl; // it will give the value of second element of array
    cout<<*(++p)<<endl; // it will increment the pointer to next element and then give the value of that element
    // cout<<"the value of *p is:"<<*p<<endl;
    // cout<<"the value of *(p+1) is:"<<*(p+1)<<endl;
    // cout<<"the value of *(p+2) is:"<<*(p+2)<<endl;
    // cout<<"the value of *(p+3) is:"<<*(p+3)<<endl;

    return 0;
}