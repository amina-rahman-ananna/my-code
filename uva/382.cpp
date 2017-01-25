#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool ck = false;
    while(cin >> n){
        if(ck == false){
            cout << "PERFECTION OUTPUT" << endl;
            ck = true;
        }
        if(n==0){
            cout << "END OF OUTPUT" << endl;
            break;
        }
        int sum=0;
        for(int j=1; j<=n; j++){
            if(n%j==0){
                sum+=j;
            }
        }

        int c=10,cn=1,s=1;
        for(int x=1; x<=6; x++){
            s *=c;
            if(s>n) break;
            cn++;
        }
        if(cn == 5){
            if(sum-n < n) cout << n << "  DEFICIENT" << endl;
            else if(sum-n > n) cout << n << "  ABUNDANT" << endl;
            else cout << n << "  PERFECT" << endl;
        }else if(cn == 4){
            if(sum-n < n) cout << " " << n << "  DEFICIENT" << endl;
            else if(sum-n > n) cout << " " << n << "  ABUNDANT" << endl;
            else cout << " " << n << "  PERFECT" << endl;
        }else if(cn == 3){
            if(sum-n < n) cout << "  " << n << "  DEFICIENT" << endl;
            else if(sum-n > n) cout  << "  " << n << "  ABUNDANT" << endl;
            else cout  << "  " << n << "  PERFECT" << endl;
        }else if(cn == 2){
            if(sum-n < n) cout  << "   " << n << "  DEFICIENT" << endl;
            else if(sum-n > n) cout  << "   " << n << "  ABUNDANT" << endl;
            else cout  << "   " << n << "  PERFECT" << endl;
        }else if(cn == 1){
            if(sum-n < n) cout  << "    " << n << "  DEFICIENT" << endl;
            else if(sum-n > n) cout  << "    " << n << "  ABUNDANT" << endl;
            else cout  << "    " << n << "  PERFECT" << endl;
        }

    }
    return 0;
}
