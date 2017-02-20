#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for(int i=1; i<=t; i++){
        char s[100];
        while(cin.getline(s, 100)){
            if(s[0] == '\0'){
                break;
            }

            for(int j=0; s[j]; j++){
                if(s[j] == '0') cout << "O";
                else if(s[j] == '1') cout << "I";
                else if(s[j] == '2') cout << "Z";
                else if(s[j] == '3') cout << "E";
                else if(s[j] == '4') cout << "A";
                else if(s[j] == '5') cout << "S";
                else if(s[j] == '6') cout << "G";
                else if(s[j] == '7') cout << "T";
                else if(s[j] == '8') cout << "B";
                else if(s[j] == '9') cout << "P";
                else cout << s[j];
            }
            cout << endl;

        }
        if(i!=t) cout << endl;
    }
    return 0;
}
