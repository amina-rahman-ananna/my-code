#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[20],n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for (int i=0;i<n;i++)

    {
        cout << arr[i] << " " ;
    }
       sort (arr,arr+n);
    cout << "      minimum number " << arr[0] << " & " << " maximum number " << arr[n-1] << endl;


    return 0;
}

