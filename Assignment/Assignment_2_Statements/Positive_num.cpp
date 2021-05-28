 #include <iostream>
using namespace std;
int main() {
   int a[5],i;
   cout<<"Enter the numbers in array\n";
   for(i=0; i<5; i++)
   cin>>a[i];
   
   for(i=0; i<5; i++)
    if(a[i]>0)
   cout<<a[i]<<" ";
   return 0;
}
