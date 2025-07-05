#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout << "enter the value of a and b :";
    cin>>a>>b;
    temp = a;
    a = b;
    b = temp ;
    cout<<"after swapping a and b is : "<<a <<b;
    return 0;
   
}