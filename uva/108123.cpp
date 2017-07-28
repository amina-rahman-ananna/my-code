#include<stdio.h>
int main()
{
long int t,to,d,w,l,i;
while(scanf("%ld",&t)==1)
{
i=1;
while(i<=t)
    {
    scanf("%ld%ld",&to,&d);
    if(d>to || (to-d)%2==1)
    printf("impossible\n");
    else 
        {
        l=(to-d)/2;
        w=l+d;
        printf("%ld %ld\n",w,l);
        }
    i++;
    }
}
return 0;
}
