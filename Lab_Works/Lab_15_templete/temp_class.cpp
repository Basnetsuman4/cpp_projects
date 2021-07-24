#include<iostream>
using namespace std;

    //  data structure  -  stack
const int MAX = 20;
template<class T>
class Stack 
{
    private:
        int arr[MAX];
        int top;

    public:
        Stack(){
            top = -1;
            
        }

        void push(T data){
            arr[++top]= data;
        }
        
        T pop(){
            return arr[top--];
        }
        int size(){
            return (top+1);
        };
};
 
int main()
{
    cout<<"Stack for interger data type"<<endl;

    Stack<float> s1;
    cout<<"Size of stack:"<<s1.size()<<endl;
    s1.push(11);
    s1.push(22);
    s1.push(33);

    cout<<"Size of Stack :"<<s1.size()<<endl;
    cout<<"Number popped :"<<s1.pop()<<endl;
    cout<<"Number popped :"<<s1.pop()<<endl;
    cout<<"Size of Stack :"<<s1.size()<<endl;

    s1.push(44);
    cout<<"Size of Stack :"<<s1.size()<<endl;
    cout<<"Number popped :"<<s1.pop()<<endl;
    cout<<"Size of Stack :"<<s1.size()<<endl;

    cout<<"Stack for floating point data type"<<endl;
    Stack<float> s2;

};