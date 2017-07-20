#include<bits/stdc++.h>
using namespace std;

string toBinary(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
 
 int main()
 {
   int a;
   cin >> a;
   cout << toBinary(a) << endl;
   return 0;
 }
