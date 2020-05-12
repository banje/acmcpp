#include <stdio.h>
int main(){
    int a,b,c,d,e,f,y,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d %d",&b,&c);
        e=0;
        for(y=b;y<=c;y=y+1){
            f=y;
            if(f==0){
                e=e+1;
            }
            d=1;
            while(1){
                if(f/d==0){
                    break;
                }
                d=d*10;
            }
            while(1){
                d=d/10;
                if(d==0){
                    break;
                }
                if(f/d==0){
                    e=e+1;
                }
                f=f-f/d*d;
            }
        }
        printf("%d\n",e);
    }
}