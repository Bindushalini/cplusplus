
#include<fstream>
#include<iostream>
using namespace std;
#include<string>


ifstream infile;
string str;
int number;
char letter;

int checkfile()
{
    infile.open("people.txt");
    if(infile.fail()){
        cout<<"file notfound"<<endl;
    }
    else{
        while(!infile.eof())
        {
            getline(infile, str);
            cout<<str<<endl;
        }
        infile.close();
    }
    return 0;
}
