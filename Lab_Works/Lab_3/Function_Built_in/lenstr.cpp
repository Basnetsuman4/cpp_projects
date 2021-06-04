#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char  word[50];
    int length;
    cout<<"\tEnter any character : ";
    
    gets(word);
    
    length=strlen(word);
    cout<<"\n\tThe length of the character is : "<<length<<".";
    
}
