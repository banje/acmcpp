#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,z=2;
    scanf("%d",&a);
    b=sqrt(a)+1;
    while(1){
        if(a%z==0){
            a=a/z;
            c=z;
            printf("%d\n",z);
            continue;
        }
        z=z+1;
        if(z>b){
            if(a!=1){
                printf("%d\n",a);
            }
            break;
        }
    }
}