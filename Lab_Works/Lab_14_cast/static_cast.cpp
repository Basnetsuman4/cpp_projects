// use of static cast
// Its function is normally to change the data  type.
#include<iostream>
using namespace std;


 int main()
 {
     int i;
     float f = 3.124f;
     i=f;
     cout<<"Value of float is : "<<f<<endl;
     cout<<"Value of converted integer is : "<<i<<endl;
    
    i = static_cast<int>(f);
    cout<<"Value of integer is : "<<i<<endl;
 }