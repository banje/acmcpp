#include <stdio.h>
int main(){
    int a,b=2001,c,d,z;
    for(z=0;z<3;z=z+1){
        scanf("%d",&a);
        if(a<b){
            b=a;
        }
    }
    scanf("%d\n%d",&c,&d);
    if(d<c){
        c=d;
    }
    printf("%d",b+c-50);
}