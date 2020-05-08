#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,*c,d=0,z;
    scanf("%d %d",&a,&b);
    c=(int *)malloc(4*a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&c[z]);
    }
    for(z=a-1;z>=0;z=z-1){
        while(c[z]<=b){
            b=b-c[z];
            d=d+1;
        }
        if(b==0){
            break;
        }
    }
    printf("%d",d);
}