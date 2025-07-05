#include<iostream>
using namespace std;
int main()
{
    float income ,percentage;
    cout <<"enter income in lakhs";
    cin>>income;
    cout<<"enter the percentage";
    cin>>percentage;
    if (income<=2.5 && percentage>=8.5)
    cout<<"elegible for scholership";
    else 
    cout<<"not elegible for scholarship";
    return 0;

}