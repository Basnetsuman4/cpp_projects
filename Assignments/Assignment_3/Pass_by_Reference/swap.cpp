#include<iostream>
using namespace std;

void swap(int num1, int num2)
    {
        int sfun;
        sfun = num1;
        num1 = num2;
        num2 = sfun;
    }
void swapfun(int &num1, int &num2)
    {       
        int sfun;
        sfun = num1;
        num1 = num2;
        num2 = sfun;

    }

int main()
    {
        int number1=10 ;
        int number2=7;
        cout<<"\n\tNumber before call function : "<<number1<<" , "<<number2<<endl;
        swap(number1, number2);
        cout<<"\n\tNumber after call function with value : "<<number1<<" , "<<number2<<endl;

        swapfun(number1,number2);
        cout<<"\n\tNumber after swap function : "<<number1<<" , "<<number2<<endl;

            
    }