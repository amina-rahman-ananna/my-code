#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[]= {10,25,30};
    int *ptr;
    ptr= &arr[0];
    for (int i=0; i<3; i++)
    {
        cout <<*ptr << endl;
        ptr++;
        // cout << ptr[i] << endl;
    }
    return 0;
}
