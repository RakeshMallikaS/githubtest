#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream obj("rakesh.txt");
    string a;
    cout<<"file contents are=\n";

    while(getline(obj,a))
    {
        cout<<a;
    }
    obj.close();
    return 0;
}
