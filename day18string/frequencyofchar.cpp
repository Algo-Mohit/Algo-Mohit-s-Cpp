#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string word ;
    cout<<"Enter a word or sentence : ";
    getline(cin,word);
    char per_char;
    cout<<"Enter specific character which we want to find : ";
    cin>>per_char;
    int frequency = count(word.begin(),word.end(),per_char);
    cout<<per_char<<" frequency in this sentence is : "<<frequency;
    return 0;
}