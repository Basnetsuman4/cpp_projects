#include<iostream>
using namespace std;


class student
{
    protected:
        char name[30];
        int roll;
        char adderss[30];

    public:
        void get_data()
        {
            cout<<"Enter the name of the student."<<endl;
            cin>>name;

            cout<<"Enter the roll number."<<endl;
            cin>>roll;

            cout<<"Enter the address"<<endl;
            cin>>adderss;
        }

        void display_data()
        {
            cout<<"Student's Name : "<<name<<endl;
            cout<<"Student's Roll no. : "<<roll<<endl;
            cout<<"Student's Address : "<<adderss<<endl;
        }
};

class test : public  virtual student
{
    protected:
        int mark1, mark2, mark3, mark4;

    public:
        void get_mark()
        {
            cout<<"Enter the mark of Maths."<<endl;
            cin>>mark1;
            
            cout<<"Enter the mark of Science."<<endl;
            cin>>mark2;
            
            cout<<"Enter the mark of Nepali."<<endl;
            cin>>mark3;

            cout<<"Enter the mark of English."<<endl;
            cin>>mark4;
        }


        void display_mark()
        {
            cout<<"Mark obtained in Maths : "<<mark1<<endl;
            cout<<"Mark obtained in Science : "<<mark2<<endl;
            cout<<"Mark obtained in Nepali : "<<mark3<<endl;
            cout<<"Mark obtained in English : "<<mark4<<endl;
        }
};

class sport : public virtual student
{
    protected:
        int score1, score2, score3, score4;

    public:
        void get_info()
        {
            cout<<"Student's performance out of 100"<<endl;
            
            cout<<"Student's stat in Football : "<<endl;
            cin>>score1;
            
            cout<<"Student's stat in Basketball : "<<endl;
            cin>>score2;
            
            cout<<"Student's stat in Marathon : "<<endl;
            cin>>score3;
            
            cout<<"Student's stat in Longjump : "<<endl;
            cin>>score1;
        }


        void display_score()
        {
            
            cout<<"Student's stat in Football : "<<score1<<endl;
            cout<<"Student's stat in Basketball : "<<score2<<endl;
            cout<<"Student's stat in Marathon : "<<score3<<endl;
             
        }
};

class result :public test, public sport
{
    private:
        int total;
    public:
        void final()
        {
            total = mark4 + mark3 + mark2 + mark1; 
        }

        void display()
        {
           cout<<"Name of Student: "<<name<<endl;
           cout<<"Roll number of student: "<<roll<<endl;
           cout<<"Total marks secured: "<<total<<endl;
           

        }
};

int main()
{
    result r;
    
     
    r.get_data();
    r.get_info();
    r.get_mark();

    cout<<"Displaying data : "<<endl;
    r.display_data();
    r.display_mark();
    r.display_score();
     

}