#include <bits/stdc++.h>
using namespace std;
int main()
{
  char a[1050];
  int s;
  while(cin >>a)
  {
    if (strcmp(a,"0")==0) break;
    s=strlen(a);
    int b=0;
    for (int i=0; i<s;i++)
    {
      b= b*10 + a[i] -'0';
      b=b%11;
    }
    if (s==1) break;
    else if (b==0) cout << a << " is a multiple of 11." << endl;
    
    else cout << a<<   " is not a multiple of 11." << endl;
    
  }
  return 0;
}
