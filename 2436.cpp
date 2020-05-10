#include <stdio.h>
int main(){
    int a,b,c,d,e,z=1;
    scanf("%d %d",&a,&b);
    d=a;
    e=b;
    while(1){
        if(a*z==b){
            break;
        }
        if(b%z==0){
            if(c>(a*z+b/z)){
                c=a*z+b/z;
                d=a*z;
                e=b/z;
            }
        }
        z=z+1;
    }
    if(d<e){
        printf("%d %d",d,e);
    }
    else{
        printf("%d %d",e,d);
    }
}