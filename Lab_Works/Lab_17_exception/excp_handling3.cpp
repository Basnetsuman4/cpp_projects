#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    int x =  (a-b);

    try
    {
        if (x != 0)
        {
            cout<<"\n Result : "<<(a / x )<<endl;

        }
        else
        {
            throw(x);  //use nalagne vayera throw gardya, jaslai chai output ma dekhaunu xaina
        }
    }
    catch(int i)
    {
       cout<<"Division by zero is not allowed"<<endl;
    }
    
    cout<<"Next Statement"<<endl;
    return 0;
}