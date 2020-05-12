#include <stdio.h>
int main(){
    int a,b,c,d=0,e=0,f=-1;
    scanf("%d %d",&a,&b);
    for(c=1;c<=b;c=c+1){
        f=f+1;
        if(e==f){
            e=e+1;
            f=0;
        }
        if(c<a){
            continue;
        }
        d=d+e;
    }
    printf("%d",d);
}