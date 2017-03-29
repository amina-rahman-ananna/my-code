#include<bits/stdc++.h>
using namespace std;
int fact (int x)
 {
     if(x==0||x==1) return 1;
    else return fact (x-1)*x;
 }

 int main()
 {
   int x=4,y;
   y=fact(x);
   printf("%d",y);
   return 0;
 }
