#include <stdio.h>
int main(){
    int a,b,c=0,d,e,f;
    for(a=1;a<10;a=a+1){
        for(b=1;b<10;b=b+1){
            scanf("%d",&d);
            if(d>c){
                c=d;
                e=a;
                f=b;
            }
        }
    }
    printf("%d\n%d %d",c,e,f);
}