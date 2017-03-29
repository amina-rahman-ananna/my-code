#include<bits/stdc++.h>
using namespace std;
 void print (int x)
 {
     if(x==0) return ;
     print(x-1);
     printf( "%d\n",x);
     return ;

 }

 int main()
 {
    print(5);
     return 0;
 }
