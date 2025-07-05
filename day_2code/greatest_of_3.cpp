#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << " enter 3 numbers ";
    cin>>a>>b>>c;
    if (a<b && b<c)
    cout<<"c is greater";
    else if(a>b && a>c)
    cout<<"a is greater";
    else
    cout<<"b is greater";
    return 0;
}