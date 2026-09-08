#include <iostream>
using namespace std;

int main(){
    int side;
    cout<<"enter the side for a sqaure:"<<endl;
    cin>>side;
    cout<<endl;

    for(int i=1;i<=side;i++){
        for(int j=1;j<=side;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}