#include<iostream>
using namespace std;

struct student
{   
    char name[20];
    char address[50];
    int roll  ;
};

int main()
{
    student s;
    cout<<"\tEnter your name : "<<endl;
    cin>>s.name;
    cout<<"\n\tEnter your address : "<<endl;
    cin>>s.address;
    cout<<"\n\tEnter your roll number : "<<endl;
    cin>>s.roll;



    cout<<"\n\tDisplaying the given information"<<endl;
    cout<<"\n\tStudent name : "<<s.name<<endl;
    cout<<"\n\tAddress : "<<s.address<<endl;
    cout<<"\n\tRoll no. : "<<s.roll<<endl;

    
}
