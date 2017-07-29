#include<stdio.h>
#include<math.h>
 
int main(){
    int n;
 
    while (scanf("%d", &n) && n){
        int works = 0, x, y;
 
        for (x = 1; x <= sqrt(n);){
            if (x*x*x > n){
                for (y = 1; y < x;){
                    if (x*x*x - y*y*y == n){
                        works = 1;
                        break;
                    }
                    ++y;
                }
                if (works) break;
            }
            ++x;
        }
 
        if (works){
            printf("%d %d\n", x, y);
        }else{
            printf("No solution\n");
        }
    }
    return 0;
}
