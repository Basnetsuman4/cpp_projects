#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char word1[25] , word2[25];
    cout<<"\tEnter any character : ";
    
    gets(word1);
    
    strcpy(word2,word1);
    
    cout<<"\n\tCopied string : ";
    puts(word2);
}
