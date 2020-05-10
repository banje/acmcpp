#include <stdio.h>
int main(){
    int a,b,c=0,z;
    double d=0;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b);
        if(b>c){
            c=b;
        }
        d=d+b;
    }
    printf("%f",d/c/a*100);
}