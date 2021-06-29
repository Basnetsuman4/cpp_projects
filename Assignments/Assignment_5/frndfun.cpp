//Illustration of friend class
#include<iostream>
using namespace std;

 class Sample
{
   private:
      float number1, number2;

   public:

     friend float mean(Sample S1); // friend function allow to access the private member from other class or outside the class. 
    
    void get_data()
           {
               cout<<"Enter the first number : "<<endl;
               cin>>number1;
               cout<<"Enter second number : "<<endl;
               cin>>number2;
           } 
       
};

float mean(Sample S1) // Calling this function inside the class and calling it outside the class using friend function is same. 
{
    float mean;
    mean = (S1.number1 + S1.number2)/2; //we can still access the private member function , as we deifned the function as FRIEND function
    return mean;
}

int main()
{
    Sample s1;

    s1.get_data();

    cout<<"The mean value of the numbers is : "<<mean(s1)<<endl; 
    

} 