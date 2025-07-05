#include<iostream>
using namespace std;
int main()
{
    int per , age;
    cout<<"enter percentage";
    cin>>per;
    cout<<"enter age";
    cin>>age;
    if(per>=75)
    {
        if(age>=25)
        {
            cout<<"Eligilbe";
        }
        else
        {
            cout<<"percentage is ok , but age is less than 25";
        }
    }
    else
    {
        cout<<"not eligible , percentage is weak ";
    }
    return 0;
}