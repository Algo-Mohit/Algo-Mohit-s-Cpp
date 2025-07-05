#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string word ;
    cout<<"Enter a word or sentence : ";
    getline(cin,word);
    int size = count(remove(word.begin(),word.end(),' '));
    cout<<"Word or sentence after removing white spaces : "<<word;
    return 0;
}