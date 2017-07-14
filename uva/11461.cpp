#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int a,b,x;
  while (cin >> a >> b)
  {
    if (a==0 && b==0) break;
    int q=0;
    for (int i=1;i<b;i++)
    {
      x= pow(i,2);
      if (a<=x && x<=b) q++;
      
    }
    cout << q << endl;
  }
  return 0;
}
