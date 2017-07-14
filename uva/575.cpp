#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main() 
{
    long int b,c;
    char a [100];
    int sum;
    while (cin >> a)
    {
      if (a==0)
      break;
      int k= strlen (a);
      
      sum=0;
      
      
        for (int p=0;p<k ; p++)
        {
          b=a[p]-'0';
          c = b *(pow(2,k-p) -1);
          sum= c+sum ;
        
        }
        if ( sum==0) break;
        
        cout << sum << endl;
    }
    
    return 0;
}
