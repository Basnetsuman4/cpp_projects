//Illustration of precedence for implicit datatype or explicit datatype 
#include<iostream>
using namespace std;


template<class T1, class T2>
T1 testfunc(T2 a)
{
    T1 b;
    b=static_cast<T1>(a);
    return b;
}   

int main()
{
    int inum=5;

    testfunc<float>(inum);
    //here, T1 will be float and T2 will be integer. 
    
    testfunc<int,float>(inum);
    //here,T1 will be integer and T2 will be float.
    //inum integer declared vako vaye pani explicit specification overrides,so inum gets converted to float.
 
    testfunc<float,int>(inum);
    return 0;
}




//credit: Jecika