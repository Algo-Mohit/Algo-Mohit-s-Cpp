#include<iostream>
using namespace std;
int main()
{
    int n , i=1 , evensum =0 ,oddsum =0;
    cout<<"enter the number";
    cin>>n;
    while (i<=n)
    {
        if(i%2==0)
        evensum = evensum + i;
        else
        oddsum = oddsum + i ;
        i++;
    }
    cout<<"sum of all even number btw 1 to "<<n<<" is "<<evensum<<endl;
    cout<<"sum of all odd number btw 1 to "<<n<<" is "<<oddsum<<endl;
    
    return 0;
    
}