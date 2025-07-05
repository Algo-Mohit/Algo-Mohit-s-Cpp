#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{  
   string word ;
   cout<<"Enter the word ";
   getline(cin,word);
   int size = word.length();
   for(int i=0 ; i<size ;i++)
   {
    if(word[i]>= 'A' && word[i]<= 'Z')
    {
        word[i] += 32;
    }
    else if(word[i]>= 'a' && word[i]<= 'z')
    {
        word[i] -= 32;
    }
   }

   cout<<"toggled word is : "<<word;
    return 0;
}