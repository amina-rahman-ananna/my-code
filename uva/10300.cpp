#include <bits/stdc++.h>
using namespace std;


int main(){
   int T, q, a,b,c;
   long long sum;
   cin >> T;
   for (int i=0; i<T; i++)
   {
     cin >> q;
     sum=0;
     
     for (int j= 0; j< q ;j++)
      {
        cin >> a;
        cin >> b;
        cin >> c;
        
        sum= sum + (a*c);
        
      }
      cout << sum << endl;
   }
    return 0;
}
