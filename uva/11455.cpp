#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T,a,b,c,d;
  cin >>T;
  for (int i=1;i<=T;i++)
  {
    cin >> a >> b >>c >> d;
   
    if(a==b && b==c && c==d && d==a)
            {
                printf("square\n");
            }
            else if((a==c && b==d)||(a==b && c==d)||(b==c && a==d))
            {
                printf("rectangle\n");
            }
            else if(a<=b+c+d && b<=a+c+d && c<=a+b+d && d<=a+b+c)
            {
                printf("quadrangle\n");
            }
            else
            {
                printf("banana\n");
            }
  }
   return 0;
}
