//Illustration of multiple class exception
#include<iostream>
using namespace std;
const int MAX = 4;

class Stack
{
    private:
        int arr[MAX];
        int top;

    public:
    class full{};
    class empty{};

    Stack()
    {
        top = -1;
    }
    
    void push(int data)
    {
        if(top==MAX - 1)
            {
                throw full();
            }

        else
            {
                arr[++top]=data;
                cout<<"Data added"<<endl;
            }
    }

     int pop()
        {
            if (top==-1)
            {
                throw empty();
            }
            else
            {
                return arr[top--];
                
            }
        }
};

int main()
{
    Stack s;
    try
    {
        s.push(11);
        s.push(22);
        s.push(33);
        s.push(44);
        s.push(55);
    }
        
        
    catch (Stack :: full)
    {
        cout<<"Stack is full."<<endl;
    }
    //euta exception handle vayepaxi control ctch paxi ko code ma shift hunxa. 
    //tesaile multiple exception handle garna multiple try and catch blocks chahinxa.
    
    try
    {
       
        cout<<"Number popped:"<<s.pop()<<endl;
        cout<<"Number popped:"<<s.pop()<<endl;
        cout<<"Number popped:"<<s.pop()<<endl;
        cout<<"Number popped:"<<s.pop()<<endl;
       

    }
    catch (Stack::empty)
    {
        cout<<"Empty stack cannot be popped."<<endl;
    }
    return 0;
}