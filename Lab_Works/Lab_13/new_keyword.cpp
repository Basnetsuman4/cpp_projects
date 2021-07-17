#include<iostream>
using namespace std;

int main()
{
    //    
    int* pointerInt;

    float* pointerFloat;
     
    pointerInt = new int;
    pointerFloat = new float;

    cout<<"Address assigned to pointeInt  is : "<<pointerInt<<endl;
    cout<<"Address assigned to pointeFloat  is : "<<pointerFloat<<endl;

    *pointerInt = 45;
    *pointerFloat = 45.5;

    cout<<"vlaue assigned to pointerInt is : "<<*pointerInt<<endl;
    cout<<"vlaue assigned to pointerFloat is : "<<*pointerFloat<<endl;

delete pointerInt;
delete pointerFloat;

return 0;
}

