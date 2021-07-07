#include<iostream>
using namespace std;

class complex{

    private:
        
        double real, imaginary;


    public:
        
        void get_data()
        {
            cout<<"Enter the real value : "<<endl;
            cin>>real;
            cout<<"Enter the imaginary value : "<<endl;
            cin>>imaginary;
        }

            

        complex operator +(complex c1)
        {
                
                complex temp;
                temp.real = real + c1.real;
                temp.imaginary = imaginary + c1.imaginary;
                
                return temp;
        }
        
        
        void display(){
            cout<<"Sum of the complex number is : " ;
            cout<<real<<" + i "<<imaginary<<endl;
        }
};


int main(){

    complex C1,C2,C3;

    C1.get_data();
    C2.get_data();

    C3 = C1 + C2;

    C3.display();
}
