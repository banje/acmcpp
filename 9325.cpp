#include <stdio.h>
int main(){
    int a,b,c,d,e,y,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d\n%d",&b,&c);
        for(y=0;y<c;y=y+1){
            scanf("%d %d",&d,&e);
            b=b+d*e;
        }
        printf("%d\n",b);
    }
}