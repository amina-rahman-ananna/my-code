#include<bits/stdc++.h>
using namespace std;

class GCDLCM
{
private:

int n,arr[100],g,l;

public:

void input()

{

cin>>n;
for(int i=0;i<n;i++) cin >>arr[i];
}


int GCD (int a,int b)
{
for(int i=min(a,b);i>=1;i--)
if(a%i==0 && b%i==0)
return i;
}


int LCM (int a,int b)
{
return (a*b)/GCD(a,b);
}


int getGCD()
{ g=arr[0];
 for(int i=1;i<n;i++)
 return g;
}

int getLCM()
{
l=arr[0];
for (int i=1;i<n;i++)
l=LCM(l,arr[i]);
return l;
}
};

int main()
{


for (int i=0;i<=3;i++){
GCDLCM obj;
obj.input();

cout<< obj.getGCD() << "\t" << obj.getLCM() ;}
return 0; }




