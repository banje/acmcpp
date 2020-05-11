#include <stdio.h>
int main(){
    int a,b,c=0,d=0,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b);
        if(b==c){
            d=d+1;
            if(c==2){
                c=c-3;
            }
            c=c+1;
        }
    }
    printf("%d",d);
}