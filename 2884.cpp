#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if (a==0){
        if (b<45){
            a=24;
        }
    }
    b=b-45;
    if (b<0){
        b=b+60;
        a=a-1;
    }
    printf("%d %d",a,b);
}