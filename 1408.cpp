#include <stdio.h>
int main(){
    int a,b=0,c=0,d;
    scanf("%d:",&a);
    b=b+3600*a;
    scanf("%d:",&a);
    b=b+60*a;
    scanf("%d:\n",&a);
    b=b+a;
    scanf("%d:",&a);
    c=c+3600*a;
    scanf("%d:",&a);
    c=c+60*a;
    scanf("%d:\n",&a);
    c=c+a;
    d=c-b;
    if(d<0){
        d=d+86400;
    }
    printf("%02d:%02d:%02d",d/3600,d/60-d/3600*60,d%60);
}