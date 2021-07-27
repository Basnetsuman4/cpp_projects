//Illustration of use of template for mixed datatype
#include<iostream>
using namespace std;


template<class T1, class T2>
float Large (T1 n1,T2 n2)
{
    return (n1>n2)? n1:n2;
}
    

int main()
{
    int i1;
    float f1;
    char c1;

    cout<<"Enter two values(int type and float type):"<<endl;
    cin>>i1>>f1;
    cout<<Large(i1,f1)<<" is larger."<<endl;
    //This call is equivalent to Large<int,float>(i1,i2)

}