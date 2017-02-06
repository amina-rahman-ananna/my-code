#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int f[],int n)
{
    for (int i=1;i<n;i++)
    {
        for (int j=0;j<n-i;j++)
        {
            if (f[j]>f[j+1]) swap (f[j],f[j+1]);
        }
    }
}
int main()
{
    int n, arr [100];
    cin >> n;
    for (int i=0;i<n;i++) cin >> arr[i];
    bubbleSort(arr,n);
    for(int i=0;i<n;i++) cout << arr[i] << " " ;

return 0;
}
