#include<iostream>
using namespace std;
int main(){
    /*Loops in c++:
    1.for loop
    2.while loop
    3.do while loop*/

    /*for loop*/
    //syntax of for loop:
    // for(initialization;condition;updation){
    //     //code to be executed
    //  }
    // for(int i=0;i<=100;i++){
    //     cout<<i<<endl;
    // }
    //for infinite loop:
    // for(int i=0;i<=100;i--){
    //     cout<<i<<endl;
    // }

    /*while loop*/
    //syntax of while loop:
    // while(condition){
    //
    //    statements;
    //}
    
    // printing 1 to 40 using while loop:
    // int i=0;
    // while (i<=40){
    
    //     cout<<i<<endl;
    //     i++;
    // }

    //infinite while loop:
    // int i=0;
    // while (true){
    //     cout<<i<<endl;
    //     i++;
    // }

    /*do while loop*/
    //syntax of do while loop:
    // do{
    //     statements;
    // }while(condition);
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=40);

    return 0;
}