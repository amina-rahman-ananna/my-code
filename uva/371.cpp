#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    while(cin >> a >> b){
        if(a==0 && b==0) break;
        if(b<a) swap(a,b);
        long long nmbr=0, gnt=0;
        for(long long i=a; i<=b; i++){
            long long x=i,cnt=0;
            if(x==1){
                nmbr = 1;
                gnt = 3;
            }else{
                while(x!=1){
                    if(x%2 == 0){
                        x=x/2;
                        cnt++;
                    }else{
                        x=(3*x)+1;
                        cnt++;
                    }
                    if(x==1){
                            if(cnt>gnt){
                                gnt = cnt;
                                nmbr = i;
                                break;
                            }
                        }
                }
            }
        }

        cout << "Between " << a << " and " << b << ", " << nmbr << " generates the longest sequence of " << gnt << " values." << endl;
    }
    return 0;
}
