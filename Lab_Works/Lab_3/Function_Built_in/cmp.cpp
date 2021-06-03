#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str1[20], str2[20];
    cout<<"\tEnter the first string : ";
    gets(str1);

    cout<<"\n\tEnter the second string : ";
    gets(str2);

    strcmp(str1,str2);

    cout<<"\n\tThe comparision between two string is : "<<strcmp(str1,str2)<<endl;
    

    if(strcmp(str1,str2)>0)
        {
            cout<<"\n\tThe first string is forward "<<endl;
        }
    else if(strcmp(str1,str2)<0)
        {
            cout<<"\n\tThe seconf string is forward"<<endl;
        }
    else
        {
            cout<<"\n\tThey are equal"<<endl;
        }
}