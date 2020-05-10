#include <stdio.h>
#include <math.h>
int main(){
    int a,b,d,e,y,z;
    scanf("%d %d",&a,&b);
    if(a==1){
        a=2;
    }
    for(z=a;z<=b;z=z+1){
        d=sqrt(z);
        e=0;
        for(y=2;y<=d;y=y+1){
            if(z%y==0){
                e=1;
                break;
            }
        }
        if(e==0){
            printf("%d\n",z);
        }
    }
}