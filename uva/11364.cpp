#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,a,b,min,max;
    cin >> T;
    for (int i=1; i<=T ; i++)
    {
      min =99;
      max =0;
      cin >> a;
      for (int j=1;j<=a;j++)
      {
        cin >> b;
  
         if (b < min)
         min =b;
        if (b > max)
        max= b;
      }
      cout << (max - min) *2 << endl;
    }
    return 0;
}
