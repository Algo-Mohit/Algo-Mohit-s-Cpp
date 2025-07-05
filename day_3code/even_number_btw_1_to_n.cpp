#include<iostream>
using namespace std;
int main()
{
    int i=1 , n ;
    cout<<"enter the number";
    cin>>n;
    while (i<n)
    {
        if(i%2==0)
        cout<<i<<endl;
        i++;
    }
    return 0;
}
