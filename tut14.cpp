#include <iostream>
using namespace std;
// structure in c++ is a user defined datatype which allows to combine data items of different kinds
//for different memory allocation 
//syntax of structure
//struct name{
//  int marks;
// char favchar;
// float salary; 
// };
typedef struct employee
    {
        /* data */
        int eId;//4
        char favchar;//1
        float salary;//4
    }ep;

union money
{
    int rice;
    char car;
    float pound;
};
enum day{
    monday,
    tuesday,
    wednesday
}t1;
int main(){
    // ep harry;
    // ep shubham;
    // ep rohandas;
    // harry.eId=1;
    // harry.favchar='c';
    // harry.salary=1200000;
    // cout<<"the employee salary is:"<<harry.salary<<endl;
    // cout<<"the employee favchar is:"<<harry.favchar<<endl;
    // cout<<"the employee eId is:"<<harry.eId<<endl;
    // shubham.eId=2;

    //for better memory management we use union 
    //only one datatype can be used for storing and other will give garbage value
    //memory is being shared between different datatypes
    union money m1;
    // m1.rice=34;
    // m1.pound=22.4;//got overwrited after writing m1.pound so (m1.rice) value has became garbage
    // cout<<m1.car<<endl;
    day t2=tuesday;
    t1=monday;
    cout<<t2<<endl;
    return 0;
}