//To add private data of two different class
#include<iostream>
using namespace std ;

class first{
    private:
        int num1;

    public:

        friend class second; //Calling friend function to get access outside class 

        void get_num(){
            cout<<"Enter the number for first class : "<<endl;
            cin>>num1; 
        }

};
class second{
    private:
        int num2;

    public:

        void get_num(){
            cout<<"Enter the number for second class : "<<endl;
            cin>>num2; 
        }

        int sum( first n1 , second n2){
            return  n1.num1 + n2.num2;
        }
};

int main(){
    first f1;
    second s1, add;

    f1.get_num();
    s1.get_num();
    cout<<"The sum of the mumbers is : "<<add.sum(f1,s1)<<endl;

}
