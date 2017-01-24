#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for(int i=1; i<=t; i++){
        char s[100000];
        int cnt = 0;
        cin.getline(s, 100000);
        for(int j=0; s[j]; j++){
            if((s[j] != ' ') && (s[j+1] == ' ')) cnt++;
        }
        cout << cnt+1 << endl;
    }
    return 0;
}
