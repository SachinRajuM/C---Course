#include <iostream>
using namespace std;
int main(){
    int n=0;
    cout<<"Enter the value of N to find sum from 1 to N:";
    cin>>n;
    int sum=0;
    for(int i=1;i<n+1;i++){
        sum+=i;
    }
    cout<<"The sum of numbers from 1 to "<<n<<" is: "<<sum<<endl;
    return 0;
}