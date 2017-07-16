#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  a,b;
    while(cin >> a)
    {
        if(a==0)
        {
            break;
        }
        while(a>9)
        {
            b = (a%10);
            a = (a/10);
            a = a+b;
        }
        cout << a << endl;
    }
    return 0;
}
