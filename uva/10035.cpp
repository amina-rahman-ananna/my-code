#include<bits/stdc++.h>
using namespace std;

int main ()
{
  unsigned long long a;
  unsigned long long b;
  int sum =0;
  int count=0;
  int carry =0;
  
   while (cin >> a>> b)
   {
     if (a== 0 && b== 0)
     break;
     carry =0;
     sum=0;
     count=0;
     while (a||b){
       
     sum = (carry + (a%10)+ (b%10));
      if (sum >=10)
      count++;
     carry =sum/10;
     a/=10;
     b/=10;
   }
     
       if ( count==0) cout << "No carry operation."<< endl;
  else if (count ==1 ) cout << "1 carry operation."<< endl;
   else cout << count <<" carry operations."<< endl;
   }
     
   
 return 0;
}
