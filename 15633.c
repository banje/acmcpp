#include <stdio.h>
int main(){
    int a,b=0,z;
    scanf("%d",&a);
    for(z=1;z*z<a;z=z+1){
        if(a%z==0){
            b=b+z;
            b=b+a/z;
        }
    }
    if(z*z==a){
        b=b+z;
    }
    printf("%d",5*b-24);
}