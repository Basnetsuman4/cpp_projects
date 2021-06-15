#include<iostream>
#include<string.h>
using namespace std;

class Student{
    private:
        char name[20];
        char address[25];
        int roll;
        double percentage;


    public:
     
        void get_info(){
            cout<<"\n\tEnter your name : "<<endl;
            cin>>name;
            cout<<"\n\tEnter your address : "<<endl;
            cin>>address;
            cout<<"\n\tEnter your roll no. : "<<endl;
            cin>>roll;
            cout<<"\n\tEnter your obtained percentage : "<<endl;
            cin>>percentage;

        }


        void display(){
            
            cout<<"\n\tStudent's percentage : "<<percentage<<"%"<<endl;
            if( percentage < 40 ){
                cout<<"\n\tSorry, you failed the exam. Focus on your study.";
            }
            else{
                cout<<"\n\tCongratulation!!!! You passed the exam with "<<percentage<<"%"<<" percentage."<<endl;
                cout<<"\n\tHere are your details "<<endl;
                cout<<"\n\tName : "<<name<<endl;
                cout<<"\n\tAddress : "<<address<<endl;
                cout<<"\n\tRoll no. : "<<roll<<endl;
                cout<<"\n\tPercentage : "<<percentage<<"%"<<endl;
            }
            


        }
};


int main(){
    Student student_1;
        student_1.get_info();
        student_1.display();

    

}

