#include<iostream>
using namespace std;


int main()
{
    int i = 100; //i is integer
    cout<<"Value of address of i is : "<<&i<<endl;
    int *p;// p is pointer variable

    //p = i; 
    p = reinterpret_cast<int*>(i);
    cout<<"Value of p is : "<<p;
}
// make the value's value into address
// i.e. value ko euqivalent value as address save hunxa
// like in this case 100 lai 64(hexa) ma convert gardya xa
