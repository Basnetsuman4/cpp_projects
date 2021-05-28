 #include <iostream>
using namespace std;
int main()
{
  int num[10] , i ;
  cout<<"\tEnter any ten numbers to be checked :\n ";
  for(int i = 0; i < 10 ; i++)
    {
        cin>>num[i];
        cout<<"\t"<<endl;

    };
    cout<<"\n The positive numbers are : ";
    for(int i = 0; i < 10; i++)
    {
        if(num[i]>0)
        {
            cout<<"\t "<<endl;
            cout<<num[i];
             
        }
    };
    return 0;
}    
  