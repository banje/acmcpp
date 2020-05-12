#include <stdio.h>
int main(){
    int a,b,c,d,e,y,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b);
        d=100;
        e=0;
        for(y=0;y<b;y=y+1){
            scanf("%d",&c);
            if(c<d){
                d=c;
            }
            if(c>e){
                e=c;
            }
        }
        printf("%d\n",2*(e-d));
    }
}