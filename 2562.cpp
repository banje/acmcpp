#include <stdio.h>

int main(){
    int c=0;
    int d=0;
    for (int a=1;a<10;a=a+1){
        int b=0;
        scanf("%d",&b);
        if (b>c){
            c=b;
            d=a;
        }
    }
    printf("%d\n%d",c,d);
}