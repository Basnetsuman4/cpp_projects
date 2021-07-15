#include<iostream>
using namespace std;


class person
{
    protected:
        string name ;
        int code;

    public:


        person()
        {
            name = "&&&&&&";
            code = 0000;
        }
        void get_info()
        {
            cout<<"Enter the name : ";
            getline(cin,name);

            cout<<"Enter the code : ";
            cin>>code;
        }
};
class account : public virtual person
{
        protected:
            double pay;

        public:
            account()
            {
                name = "&&&&";
                code= 0000;
                pay = 0;
            }
            void get_pay()
            {
                cout<<"Enter the rate per hour : ";
                cin>>pay;
            }

            void display_pay()
            {
                 cout<<"Rate per hour : "<<pay<<endl;
            }


};

class admin : public virtual person
{
    protected:
        int year;

    public:
        
        
        admin()
        {
                name = "&&&&";
                code = 0;
                year = 0;
        }
        void get_experience()
        {
            cout<<"Your experience in this service (In Years) : ";
            cin>>year;
        }

        void display_exp()
        {
            cout<<"Name :"<<name<<endl;
            cout<<"Code : "<<code<<endl;
            cout<<"Years of experience : "<<year<<endl;
        }

};

class master : public admin , public account
{
    public:
        void detail()
        {
            
            cout<<"Name : "<<name<<endl;
            cout<<"Code : "<<code<<endl;
            cout<<"Rate per hour : Rs "<<pay<<endl;
            cout<<"Years of experience : "<<year<<" years."<<endl;
        }

};

int main()
{
    master m;
    char choice;
    do
    {
        m.get_info();
        m.get_experience();
        m.get_pay();
    
        cout<<"Do you want to update the registered data y/n ?"<<endl;
        cin>>choice;
        cin.ignore();
    } while (choice=='y' ||choice=='Y');
    
    
    system("cls");
    
    cout<<"Displaying the registered data : "<<endl;
    m.detail();

}