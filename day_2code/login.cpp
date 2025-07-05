#include<iostream>
using namespace std;
int main()
{
    string correctusername = "hello";
    string correctpassword = "123456";
    string username , password ;
     cout<<"enter username : ";
    cin>>username ;
    cout<<"enter password :";
    cin>>password;
    if(correctusername == username && correctpassword == password )
    cout<<"login successful ";
    else
    cout<<"worng username and password ";
    return 0;
}