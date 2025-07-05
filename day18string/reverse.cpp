#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string word ;
    cout<<"Enter a string : ";
    getline(cin,word);
    cout<<"Before reverse word is : "<<word<<endl;
    reverse(word.begin(),word.end());
    cout<<"After reverse word is : "<<word<<endl;
    return 0;
}