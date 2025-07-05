#include<iostream>
using namespace std;
int main()
{
   int i = 1,n,ans ,m;
   cout<<"enter a number jiski table print karni ho ";
   cin>>n;
   cout<<"enter a number jaha tak table print karni ho";
   cin>>m;
   while (i<=m)
   {
    ans = n * i ;
    cout<<n << " * "<<i<< " = -"<< ans<<endl;
    i++;
   }
   return 0;
   

}