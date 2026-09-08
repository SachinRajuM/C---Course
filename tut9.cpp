#include<iostream>
using namespace std;
int main(){
    //1. selection control structure: if else-if else ladder
    // int age;
    // cout<<"enter your age:";
    // cin>>age;
    // if((age<18) && (age>0)){
    //     cout<<"you cannot come to the party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"you are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"you are not born yet"<<endl;
    // }
    // else{
    //     cout<<"you can come to the party"<<endl;
    // }

    //2. selection control structure: switch case
    int age;
    cout<<"enter your age:";
    cin>>age;
   
    
    switch (age){
        case 18:
        cout<<"you are 18"<<endl;
        break;

        case 22:
        cout<<"you are 22"<<endl;
        break;

        case 2:
        cout<<" you are 2"<<endl;
        break;

        default:
        cout<<"you are not special"<<endl;
    }
    cout<<"done with switch case"<<endl;
    return 0;

}