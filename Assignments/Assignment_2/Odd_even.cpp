#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"\tEnter the number : ";
    cin>>num;
        if(num == 0)
        {
            cout<<"\n\tThe number is zero.";
        }
        
        else if(num%2==0)
            {
                cout<<"\n\tThe number is even.";
            }
    
        else
            {
                cout<<"\n\tThe number is odd.";
            }     

    return 0;
}