#include <iostream>
using namespace std;

int main(){
    int i;
    cout<<"Enter the size of array:"<<endl;
    cin>>i;
    int marks[i];
    for (int j=0;j<i;j++){
        
        cin>>marks[j];
    }
    int j=0;
    while(j<i){
        cout<<marks[j];
        if(j==i-1){
            break;
        }
        cout<<",";
        j++;
    }
    cout<<endl;
     int count=0;
     int tar;
     cout<<"target number to search:"<<endl;
     cin>>tar;
     for (int k=0;k<i;k++){
        if(marks[k]==tar){
            count+=1;
        }
        
     }
     cout<<count;

    
    return 0;
}