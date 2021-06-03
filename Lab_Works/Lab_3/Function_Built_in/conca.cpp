#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[25],str1[25],str2[25];

    cout<<"\tEnter the first string : ";
    gets(str);

    cout<<"\n\tEnter the second string : ";
    gets(str1);

    cout<<"\n\tEnter the third string : ";
    gets(str2);

    cout<<"\n\tThe entered string is : "<<strcat(str , str1);

}