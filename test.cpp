#include<stdio.h>
#include<stdlib.h>
using namespace std;

int *fact;

int main(){
    int n, m, i, j, k, ans = 0;
    scanf("%d %d", &n, &m);
    fact = (int *)malloc(n*n*sizeof(int));
    for(i=0;i<n*n;i++){fact[i]=0;}
    size_t a, b;
    while(m--){
        scanf("%u %u", &a, &b);
        if(a<b){fact[(a-1)*n+b-1] = 1;}
        else{fact[(b-1)*n+a-1] = 1;}
    }
    for (i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(fact[n*i+j]){ continue;}
            for(k=j+1;k<n;k++){
                if(fact[n*i+k] || fact[n*j+k]){ continue;}
                ans++;
            }
        }
    }
    printf("%d", ans);
    return 0;

}