#include <stdio.h>
int main(){
    int a,b,c,d,y,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b);
        c=b/3;
        d=0;
        for(y=0;y<=c;y=y+1){
            d=d+(b-y*3)/2+1;
        }
        printf("%d\n",d);
    }
}