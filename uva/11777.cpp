#include<bits/stdc++.h>
using namespace std;
 int main()
 {
   int t;
   int a,b,c, m,n,o, z;
   double sum=0.00;
   
   cin >> t;
   for (int i=1;i<=t;i++)
   {
     cin >> a >>b >>c>>m>>n>>o>>z;
     if (n<=o&& n<=z) sum= a+b+c+m+(o+z)/2;
     else if (n==o && o==z ) sum= a+b+c+m+n;
     else if ((n==0&&o==0&&z!=0)||(o==0&&n!=0&&z==0)||(z==0&&o!=0&&n==0)) sum=a+b+c+m;
     else if(n>=o && o<=z) sum= a+b+c+m+ (n+z)/2;
     else if (n>=z&& o>=z) sum= a+b+c+m+(n+o)/2;
     
     if (sum >=90) cout <<"Case " << i << ": A" <<endl;
     else if (sum >=80 && sum <=89) cout <<"Case " << i << ": B" <<endl;
     else if (sum >=70 && sum <=79) cout <<"Case " << i << ": C" <<endl;
     else if (sum >=60 && sum <=69) cout <<"Case " << i << ": D" <<endl;
     else if (sum <60) cout <<"Case " << i << ": F" <<endl;
     
   }
   return 0;
 }
