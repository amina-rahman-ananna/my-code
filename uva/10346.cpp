#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int a,n,k;
while ((cin >> n >> k)&& (k>1))
{
  a=n;
  while (n>=k){
  a+=n/k;
  n=(n/k)+(n%k);}
  
  
  cout << a << endl;
}
  return 0;
}
