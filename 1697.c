#include <stdio.h>
int main(){
    int a,b,c[100001]={0},d[100000],e=1,f=0,h;
    scanf("%d %d",&a,&b);
    if(a>=b){
        printf("%d",a-b);
        return 0;
    }
    d[0]=a;
    c[a]=1;
    while(1){
        h=d[f];
        if(h==b){
            printf("%d",c[h]-1);
            break;
        }
        if(h!=0){
            if(c[h-1]==0){
                c[h-1]=c[h]+1;
                d[e]=h-1;
                e=e+1;
            }
        }
        if(h!=100000){
            if(c[h+1]==0){
                c[h+1]=c[h]+1;
                d[e]=h+1;
                e=e+1;
            }
        }
        if(2*h<=100000){
            if(c[2*h]==0){
                c[2*h]=c[h]+1;
                d[e]=2*h;
                e=e+1;
            }
        }
        f=f+1;
    }
}