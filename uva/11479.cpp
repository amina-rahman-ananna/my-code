#include<bits/stdc++.h>
using namespace std;
 int main()
 {
   int T;
   long a,b,c;
   cin >> T;
   for (int i=1;i<=T;i++)
   {
     cin >>a >> b>>c;
     
     if ((a+b)<=c || (b+c)<=a || (a+c)<=b)cout <<"Case " << i <<":"<< " Invalid"<< endl;
     else if (a<=0 || b<=0 || c<=0)cout <<"Case " << i <<":"<< " Invalid"<< endl;
     else if (a==b&&b==c) cout <<"Case " << i <<":"<< " Equilateral"<< endl;
     else if (a==b || b==c || c==a) cout << "Case " << i <<":"<< " Isosceles"<< endl;
     else cout << "Case " << i <<":"<< " Scalene"<< endl;
   }
   return 0;
 }
