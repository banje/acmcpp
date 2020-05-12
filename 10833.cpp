#include <stdio.h>
int main(){
    int a,b,c,d=0,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d %d",&b,&c);
        d=d+c%b;
    }
    printf("%d",d);
}