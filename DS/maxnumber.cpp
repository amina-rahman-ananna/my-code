
#include<bits/stdc++.h>
using namespace std;
int maximum(int f[],int n)
{
    int t= f[0];
    for(int i=1;i<n;i++)
        if(t<f[i])
        t=f[i];
    return t;
}
int mian()
{
    int n, arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>> arr[i];
    cout << maximum ( arr , n ) << endl;
    return 0;
}
