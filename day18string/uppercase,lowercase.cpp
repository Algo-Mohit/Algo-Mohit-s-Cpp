#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string lower,upper;
    cout<<"Enter a string : "; 
    getline(cin,lower);
    cout<<"Enter another string : ";
    getline(cin,upper);
    int size = lower.length();
    for(int i = size-1;i>=0;i--)
    {
        lower[i] = tolower(lower[i]);
    }
    size = upper.length();
    for(int i = size-1;i>=0;i--)
    {
        upper[i] = toupper(upper[i]);
    }
    cout<<"lower case is : "<<lower<<"\nUpper case is : "<<upper<<endl;
    return 0;
}