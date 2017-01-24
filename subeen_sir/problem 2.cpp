#include<iostream>
using namespace std;
int main()
{
   int t, n, sM=0;
   cin >> t;
   for(int i=1; i<=t; i++)
   {
      cin >> n;
      if(n<0) sM++;
   }
   cout << t-sM << " " << sM << endl;
   return 0;
}
