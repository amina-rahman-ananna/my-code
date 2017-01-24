#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin >> a >> b){
        int cng=0;
        if(a>b){
            swap(a,b);
            cng = 1;
        }
        int bNmbr=a, n=a, bcnt=0;
        for(int i=a; i<=b; i++){
            int cnt=0, n=i;
            while(true){
                if(n == 1){
                    cnt++;
                    if(cnt >= bcnt){
                        bcnt = cnt;
                        bNmbr = i;
                    }
                    break;
                }else{
                    if(n%2 == 0){
                        n = n/2;
                        cnt++;
                    }else{
                        n = (3*n)+1;
                        cnt++;
                    }
                }

            }

        }
        if(cng == 1) swap(a,b);
        cout << a << " " << b << " " << bcnt << endl;
    }
    return 0;
}
