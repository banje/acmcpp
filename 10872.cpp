#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=1;
    while (a>0){
        b=b*a;
        a=a-1;
    }
    printf("%d",b);
}