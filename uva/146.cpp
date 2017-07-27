#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    while(cin>>s)
    {
        if(s[0]=='#') break;

        int len=strlen(s);

        if(next_permutation(s,s+len))
            cout<<s<<endl;
        else
            cout<<"No Successor"<<endl;
    }
return 0;
}
