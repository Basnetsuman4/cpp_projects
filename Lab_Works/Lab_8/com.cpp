//WAP to add two complex numbers passing object as an argument and returning resultant complex number
#include<iostream>
using namespace std;

class complex{

    private:
        
        double real;
        double imaginary;

    public:

        void get_info(){
            cout<<"Enter the real and imaginary value."<<endl;
            cin>>real;
            cin>>imaginary;
        }

        complex sum_complex(complex c1, complex c2){
            complex add;
            add.real= c1.real+c2.real;
            add.imaginary = c1.imaginary+c2.imaginary;
            return (add);
        }

        void dispaly(){
            cout<<"The sum of the complex value is : "<<real<<"j "<<imaginary;
        }

};

int main(){
    complex c1,c2,c3;
    c1.get_info();
    c2.get_info();
    c3=c3.sum_complex(c1,c2);
    c3.dispaly();
    return 0;
}
