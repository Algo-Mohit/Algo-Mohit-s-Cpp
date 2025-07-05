#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the value of n ";
    cin>>n;
    char ch;
    for(i=1;i<=n;i++)
{
    ch ='A';
    for(j=1;j<=n;j++)
    {
        cout<<ch; 
        ch = ch +1 ;

    }
    cout<<endl ;
}
return 0;
}