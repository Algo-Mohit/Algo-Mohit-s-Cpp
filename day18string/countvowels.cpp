#include<iostream>
using namespace std;
int main()
{
    string word ;
    cout<<"Enter a word : ";
    getline(cin,word);
    int size=word.size(),count = 0;
    for(int i=size-1;i>=0;i--)
    {
        if(toupper(word[i])=='A'||toupper(word[i])=='E'||toupper(word[i])=='I'||toupper(word[i])=='O'||toupper(word[i])=='U')
        count++;
    }
    cout<<"Number of vowels in string is : "<<count<<endl;
}