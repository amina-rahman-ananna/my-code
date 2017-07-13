#include <bits/stdc++.h>
using namespace std;
 int main()
 {
   int a,n;
   while (cin >> n)
   {
     a=n;
     while (n>=3)
     {
       a=a+n/3;
       n= (n/3) + (n%3);
       
     }
     if(n==2) a++;
     cout << a << endl;
   }
  return 0;
 }
