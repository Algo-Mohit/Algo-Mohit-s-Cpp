#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string word ;
    cout<<"Enter a word or sentence : ";
    getline(cin,word);
    for(int i = 0;i<word.length()-1;i++)
    {
        if(word[i] ==  ' ')
        word[i] = '-';
    }
    cout<<"MOdified string is : "<<word;
    return 0;
}