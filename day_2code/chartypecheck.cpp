#include<iostream>
using namespace std;
int main(){
     char ch;
     cout<<"enter the character ";
     cin>>ch;

     if(ch>='A' && ch<='Z')
     cout<<"character "<<ch<<" is upper case ";

     else if(ch>='a' && ch<='z')
     cout<<"character "<<ch<<" is lower case ";

     else if(ch>='0' && ch<='9')
     cout<<"character "<<ch<<" is number ";

     else 
     cout<<"character " <<ch <<" is special charactor";
     return 0;

}