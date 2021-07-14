#include<iostream>
using namespace std;


class student
{
    protected:
        char name[30];
        int roll;
        

    public:
        void get_data()
        {
            cout<<"Enter the name of the student."<<endl;
            cin>>name;

            cout<<"Enter the roll number."<<endl;
            cin>>roll;

         }

         
};

class test : public  virtual student
{
    protected:
        int mark1, mark2;

    public:
        void get_mark()
        {
            cout<<"Enter the mark of Maths."<<endl;
            cin>>mark1;
            
            cout<<"Enter the mark of Science."<<endl;
            cin>>mark2;
            
        }


        void display_mark()
        {
            
            cout<<"Student's name : "<<name<<endl;
            cout<<"Student's roll no. : "<<roll<<endl;
            cout<<"Mark obtained in Maths : "<<mark1<<endl;
            cout<<"Mark obtained in Science : "<<mark2<<endl;
            
        
        }
};

class sport : public virtual student
{
    protected:
        int score ;
    public:
        void get_info()
        {
             
            cout<<"Studet's score in sports : "<<endl;
            cin>>score;
        }


        void display_score()
        {
            
            
            cout<<"Student's score in sports : "<<score<<endl;
        }
};

class result :public test, public sport
{
   
        int total=0;
   
    public:
        void final()
        {
            total = mark1 + mark2 + score; 
        }

        void display()
        {
            
           cout<<"Total marks secured: "<<total<<endl;
           

        }
};

int main()
{
    result r;
    
     
    cout<<"Regiter data"<<endl;
    
    r.get_data();
    r.get_info();
    r.get_mark();
    r.final();

    cout<<"Displaying data : "<<endl;
    cout<<endl;
    r.display_mark();
    r.display_score();
    r.display();
     

}