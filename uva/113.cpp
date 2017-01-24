#include<bits/stdc++.h>
using namespace std;
int main ()
{
double a,b,h;
while(cin >> a>> b)
{
  h=pow(b,(1.0/a));
  cout << fixed;
  cout << setprecision(0) << h<< endl ;

}
return 0;
}
