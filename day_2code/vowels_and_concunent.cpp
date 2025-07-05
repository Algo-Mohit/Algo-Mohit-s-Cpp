#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter alphabet in lower case ";
    cin>>ch;

    if(ch>='a' && ch<='z')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        cout<<"alphabet is vowel ";
        else
        cout<<"alphabet is consunent";
    }
    else
    cout<<"enter correct form of alphabet";
    return 0;
}