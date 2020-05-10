#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d[101],e[101],y=0,z;
    scanf("%d %d",&a,&b);
    c=sqrt(a);
    for(z=1;z<=c;z=z+1){
        if(a%z==0){
            d[y]=z;
            e[y]=a/z;
            y=y+1;
        }
    }
    if(b<=y){
        printf("%d",d[b-1]);
        return 0;
    }
    b=b-y;
    if(a==(z-1)*(z-1)){
        b=b+1;
    }
    if(b>y){
        printf("0");
    }
    else{
        printf("%d",e[y-b]);
    }
}
