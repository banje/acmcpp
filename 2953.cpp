#include <stdio.h>
int main(){
    int a,b,c=0,d,y,z;
    for(z=0;z<5;z=z+1){
        b=0;
        for(y=0;y<4;y=y+1){
            scanf("%d",&a);
            b=b+a;
        }
        if(b>c){
            c=b;
            d=z+1;
        }
    }
    printf("%d %d",d,c);
}