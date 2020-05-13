#include <stdio.h>
int main(){
    int a,b,c,d=0,e=0,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d %d",&b,&c);
        if(b>c){
            d=d+1;
        }
        else if(b<c){
            e=e+1;
        }
    }
    printf("%d %d",d,e);
}