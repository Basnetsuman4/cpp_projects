#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    int x = a /  (a-b); // if same is given then output won't be shown
    cout<<"Value of x is "<<x<<endl;
    return 0;
}