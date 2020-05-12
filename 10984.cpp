#include <stdio.h>
int main(){
    int a,b,c,e,y,z;
    double d,f;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b);
        e=0;
        f=0;
        for(y=0;y<b;y=y+1){
            scanf("%d %lf",&c,&d);
            e=e+c;
            f=f+c*d;
        }
        printf("%d %lf\n",e,f/e);
    }
}