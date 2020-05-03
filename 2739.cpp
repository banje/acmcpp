#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for (int b=1;b<10;b=b+1){
        printf("%d * %d = %d\n",a,b,a*b);
    }
}