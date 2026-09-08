#include <iostream>
using namespace std;

inline int product(int x,int y){
    //Not recommended to use the below lines of code in inline function(don't use static,recursion ,loops when using inline functions)
    // static int c=0;//This will execute only ones
    // c=c+1;//Next time this function is runned the value of c is retained
    // return (x*y+c);
}
float moneyreceived(int currentmoney,float factor=1.04f){//The arguments written in the extreme right are default arguments and generally its imp to note the formal arguments( which change are needed to written first otherwise will give error)
    return currentmoney*factor;            //default arguments----> if no value passed then taken as default  
}
int main(){
    // int a,b;
    // cout<<"Enter the values of a and b:"<<endl;
    // cin>>a>>b;
    // cout<<"the product of a and b is:"<<product(a,b)<<endl;
    int money=100000;
    cout<<"If you have "<<money<<"Rps in ur bank account, you will recieve "<<moneyreceived(money)<<"Rps after 1 year"<<endl;
    cout<<"If you are VIP:If you have "<<money<<"Rps in ur bank account, you will recieve "<<moneyreceived(money,1.1)<<"Rps after 1 year"<<endl;
    return 0;
}