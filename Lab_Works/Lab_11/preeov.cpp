#include<iostream>
using namespace std;

class count{

    private:
        int num1;
    
    public:

        void get_data(){
         cin>>num1;
         }

        count operator ++(){
             count c1;
             c1.num1 = num1 + 1;
             return c1;

        }

        void display(){
             cout<<"The vlaue of num1 : "<<num1<<endl;
        }
};

int main(){
    count c;
    
    c.get_data();
    
    c = ++c;
    c.display();

    return 0;
}