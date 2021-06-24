//WAP to pass object in parameter
#include<iostream>
using  namespace std ;

class student{
    public:
        double marks;
        //Constructor to initilize marks
    student(double m){
        marks = m;
    }
};

//we are making a function , which takes object as an argument
//class -> 2 students ko avg mark ko calculation

void calculateavg(student s1 , student s2){
    double average = (s1.marks + s2.marks) / 2;
    cout<<"The average mark of two student is : "<<average<<endl;
}

int main(){
    student student1(120.0), student2(145.0);
    calculateavg(student1, student2);
}