#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T,a,b,c;
  cin >> T;
  for (int i=1;i<=T;i++)
  {
    cin >> a>> b>> c;
    if ((a+b)<=c || (b+c)<=a || (a+c)<=b) cout << "Wrong!!" << endl;
    else cout << "OK" << endl;
    
  }
  return 0;
}
