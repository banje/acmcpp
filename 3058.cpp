#include <stdio.h>
int main(){
    int a,b,c,d,y,z;
    scanf("%d",&a);
    for(y=0;y<a;y=y+1){
        c=0;
        d=101;
        for (z=0;z<7;z=z+1){
            scanf("%d",&b);
            if (b%2==0){
                c=c+b;
                if (b<d){
                    d=b;
                }
            }
        }
        printf("%d %d\n",c,d);
    }
}