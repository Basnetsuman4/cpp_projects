#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char word[25];
    cout<<"\tEnter any character : ";
    
    gets(word);

    

    cout<<"\n\tThe reversed string is : "<< strrev(word);
}