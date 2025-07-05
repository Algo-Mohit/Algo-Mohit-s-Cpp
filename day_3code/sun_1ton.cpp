#include<iostream>
using namespace std;
int main()
{
    int n ,sum=0 ,i=1;
    cout<<"enter a number ";
    cin>>n;
    while(i<=n)
    {
        sum = sum + i;
        i++;
    }
    cout<<"sum of number form 1 to "<<n<<" is "<<sum;
    return 0;
}