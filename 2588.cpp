#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    int b;
    scanf("%d\n%d",&a,&b);
    printf("%d\n%d\n%d\n%d",a*(b%10),a*(b%100-b%10)/10,a*(b-b%100)/100,a*b);
}