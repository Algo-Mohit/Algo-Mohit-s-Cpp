#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{  
   string word ;
   cout<<"Enter the word ";
   getline(cin,word);
   int space = 0;
   int size = word.length();
   for(int i=0 ; i<size ;i++)
   {
    if(word[i] == ' ')
    {
       space++;
    }
   }
   cout<<"Number of words in string is : "<<space+1;

   return 0;
}   