/* Write a program to search for an element from an array input from the user. */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[100], k, flag = 0 ;

    cin >> n ;
    for(int i=0;i<n;i++) cin >> arr[i] ;
    cin >> k ;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            flag = 1;
            break ;
        }
    }

    if(flag) puts("Found"); else puts("Not Found");
    return 0 ;
}
