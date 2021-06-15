#include<iostream>
#include<stdio.h>
using namespace std;
 
 class Employee
 {
     private:
       char name[20];
       int id ;
       float salary;

     public:

           void inputdata()
            {
                cout<<"Enter Your name "<<endl;
                cin>>name;
                cout<<"Enter Your id"<<endl;
                cin>>id;
                cout<<"Enter your salary"<<endl;
                cin>>salary;
            }  


            void displaydata()
            {
                
                
                cout<<name<<"\t"<<id<<"\t"<<salary;
                
                
                
            }
 };

 int main()
 {
     Employee E[5];;
     for(int i=0;i<5;i++)
       {
           cout<<"Enter details of Employee \t"<< i+1<<endl;
           E[i].inputdata();
       }
  cout<<"Name \t"<<" Id \t"<<"salary \t"<<endl;
     for(int j=0;j<5;j++)
     {
         E[j].displaydata();
         cout<<endl;
     }

     
 }