#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d,e,y,z;
    scanf("%d %d",&a,&b);
    c=1;
    d=b/a;
    for(z=sqrt(d);z>=1;z=z-1){
        if(d%z==0){
            e=0;
            for(y=2;y<=z;y=y+1){
                if((z%y==0)&((d/z)%y==0)){
                    e=1;
                    break;
                }
            }
            if(e==0){
                printf("%d %d",a*z,a*(d/z));
                return 0;
            }
        }
    }
}