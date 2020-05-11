#include <stdio.h>
int main(){
    int a,b,c=0,d=0,z;
    for(z=0;z<10;z=z+1){
        scanf("%d %d",&a,&b);
        c=c-a+b;
        if(c>d){
            d=c;
        }
    }
    printf("%d",d);
}