#include <stdio.h>
int main(){
    int a,z;
    long long b=0,c=1,d=1;
    scanf("%d",&a);
    for(z=1;z<a;z=z+1){
        d=b+c;
        b=c;
        c=d;
    }
    if(a==0){
        d=0;
    }
    printf("%lld",d);
}