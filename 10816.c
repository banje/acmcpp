#include <stdio.h>
int c[20000002];
int main(){
    int a,b,z;
    scanf("%d",&a);
    for(z=a;z>0;z=z-1){
        scanf("%d",&b);
        b=b+10000000;
        c[b]=c[b]+1;
    }
    scanf("%d",&a);
    for(z=a;z>0;z=z-1){
        scanf("%d",&b);
        b=b+10000000;
        printf("%d ",c[b]);
    }
}