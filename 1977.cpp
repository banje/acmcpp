#include <stdio.h>
int main(){
    int a,b,c=0,d=10001,y,z;
    scanf("%d\n%d",&a,&b);
    for(z=a;z<=b;z=z+1){
        y=1;
        while(1){
            if(y*y>z){
                break;
            }
            if(y*y==z){
                c=c+z;
                if(z<d){
                    d=z;
                break;
                }
            }
            y=y+1;
        }
    }
    if(c==0){
    printf("-1");
    }
    else{
        printf("%d\n%d",c,d);
    }
}