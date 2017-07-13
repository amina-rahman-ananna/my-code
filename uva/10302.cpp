#include<stdio.h>
#include<math.h>
int main()
{
long double n,sum;
while(scanf("%Lf",&n)==1)
{
sum=(n*n*(n+1)*(n+1))/4;
printf("%.0Lf\n",sum);
}
return 0;
}
