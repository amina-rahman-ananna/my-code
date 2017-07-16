#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T,n,sum,a;
  cin >> T;
  for (int i=1; i<=T; i++)
  {
    cin >> n; 
    sum = (((((n*567)/9)+7492)*235)/47)- 498 ;
    a = (sum /10) % 10;
    if (a>0)
    cout << a << endl;
    else 
    cout << -1*a << endl;
  }
  return 0;
}
