#include<iostream>
using namespace std;
int main()
{
    char enter;
    cout<<"Enter any key \n";
    enter = cin.get();
    if(enter == 10)
    {
        cout<<"You press enter";
    }
    else
    {
        cout<<"You dont press enter";
    }
    return 0;
}