#include<bits/stdc++.h>
using namespace std;
int main()
{
    char snts[1000000];
    int cnt=0;
    while(gets(snts))
    {
        for(int i=0; snts[i]; i++)
        {
            if(snts[i] == '\"')
            {
                cnt++;
                if(cnt%2 == 0) cout << "''";
                else cout << "\``";
            }
            else cout << snts[i];
        }
        cout << endl;
    }
    return 0;
}
