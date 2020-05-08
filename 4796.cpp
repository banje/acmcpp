#include <stdio.h>
int main(){
    int a,b,c,d,e=1;
    while(1){
        scanf("%d %d %d",&a,&b,&c);
        if(a==0&b==0&c==0){
            break;
        }
        d=c/b*a;
        if (c%b>a){
            d=d+a;
        }else{
            d=d+c%b;
        }
        printf("Case %d: %d\n",e,d);
        e=e+1;
    }
}