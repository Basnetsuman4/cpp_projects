#include<iostream>
using namespace std;

int main()
{   int num1 , num2, sum , difference;
    cout<<"\tEnter the first number : ";
    cin>>num1;
    cout<<"\n\tEnter the second number : ";
    cin>>num2;

    {// 1. ARITHEMATIC OPERATORS//
 
    sum = num1 + num2 ;   // Here (+) is the operator. Likewise (+) , there are other operators like (-),(*),(/),(%),(++),(--)//
    cout<<"\n\tThe sum of two number is : "<<sum<<endl;
    }
    {// 2. RELATIONAL OPERATOR//
        
        if (num1 > num2)    //Here (>) is the relaational operator. Likewise (>), ther are other relational operators like (<),(!=),(>+),(>-),etc//
        {
            cout<<"\n\tFirst number is greater than the second one"<<endl;
        }
        else
        {
            cout<<"\n\tSecond number is greater than the first one"<<endl;

        }

    }
    {// 3. LOGICAL OPERATORS//

    if (num1==num2) // Here (==) is the opertor. Likewise (==), there are other operators like (&&),(!).etc//
        {
            cout<<"\n\tBoth the numbers are equal"<<endl;
        }
    else
        {
            cout<<"\n\tBoth numbers are not equal"<<endl;
        }
    }
    {// 4. ASSIGNMENT OPERATOR//

        difference = num1-num2;// Here (=) is the operator. Likewise (+=),(-=),(/=),etc are assignment operators too/
        cout<<"\n\tThe difference between the number is : "<<difference<<endl;
    }
    {// 5. BITWISE OPERATOR//
        cout<<"\n\tBitwise operator"<<(num1  & num2)<<endl;  // Here (&) is the bitwise operator. Likewise (&), there are other operators like (~),(^),etc//
    }
    {// 6. CONDITIONAL OPERATOR//
        if (num1>0)
        {
            cout<<"\n\tFirst number is positive integer"<<endl;
        }
        else
        {
            cout<<"\n\tFirst number is negative integer"<<endl;
        }

    }

     
    }