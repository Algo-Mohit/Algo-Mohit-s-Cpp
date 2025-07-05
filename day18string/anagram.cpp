#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{  
   string word , word2;
   int count =0;
   cout<<"Enter the word ";
   getline(cin,word);
    cout<<"Enter the word2 ";
   getline(cin,word2);
   int size = word.length();
   int size2 = word2.length();
   for(int i=0 ; i<size ;i++)
   {
    for(int j=0 ; j<size2 ;j++)
    {
        if(word[i]==word2[j])
        {
           count++;
        }
    }
   }
   if(count == size)
   {
    cout<<"word is anagram ";
   }
   else
   cout<<"word is not anagram ";
    return 0;
}