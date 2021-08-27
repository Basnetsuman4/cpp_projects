#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    //create a file of fstream  class

    fstream file;

    // opening file "  createfile.txt " in o ut(write) mode 

    file.open("creaatefile.txt", ios::out);

    if(!file)
    {
        cout<<"Error in creating file!!";
        return 0;
    }

    cout<<"File created successfully";

    // closing the file
    file.close();
    return 0;
}