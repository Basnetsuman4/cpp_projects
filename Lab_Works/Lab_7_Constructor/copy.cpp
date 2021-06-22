#include<iostream>
using namespace std;

class sum 
{
   
    private:

    double num1;
    double num2;

    public:

    sum(double n1, double n2){
        num1 = n1;
        num2 = n2;
    }

    sum(sum &obj){
        num1 = obj.num1;
        num2 = obj.num2;
    }

    double get_sum(){
        return num1 + num2;
    
    }
};

int main(){
    sum sum1(10.2,15.2);
    sum sum2 = sum1;

    cout<<"sum1 :  "<<sum1.get_sum()<<endl;

     
     cout<<"sum 2 : "<<sum2.get_sum()<<endl;
}