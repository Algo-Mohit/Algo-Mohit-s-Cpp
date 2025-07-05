#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string word ;
    cout<<"Enter a word or sentence : ";
    getline(cin,word);
    string palendrome = word; 
    reverse(word.begin(),word.end());
    if(palendrome == word)
    {
        cout<<palendrome<<" is palendrome number .";
    }
    else
    {
        cout<<palendrome<<" is not palendrome number ";
    }
    return 0;
}