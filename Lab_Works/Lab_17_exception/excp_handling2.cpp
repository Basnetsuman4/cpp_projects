#include<iostream>
using namespace std;

int main()
{
  int x = -1;
    cout<< "before try \n";
    try
    {
        cout<<"Inside try\n";
        if ( x <0)
        {
            throw x;
            cout<<"After  throw \n";
        }
    }

    catch (int x)
    {
       cout<<"Exception caught. Int type \n";

    }
    catch (float x)
    {
        cout<<"Exception Caught. Float type \n";
    }

    cout<<"After catch \n";
    return 0;
}

/* output

before try 
Inside try
Exception caught. Int type
After catch
*/

// input deko data type k o condition milena bhane catch ma detect garxa
// try chai jasto data deko bela pani chalxa