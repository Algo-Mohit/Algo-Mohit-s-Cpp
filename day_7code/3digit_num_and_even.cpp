#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number";
    cin>>number;
    if(number>=100 && number<=999)
    {
        cout<<"number is 3 digit number"<<endl;

        if(number % 2 == 0)
        {
            cout<<"number is even"<<endl;
        }
        else
        {
            cout<<"number is odd "<<endl;
        }
    }
    else
    {
        cout<<"number is not 3 digit number "<<endl;
    }
    return 0;
}