#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int b=1;b<=a;b=b+1){
        for (int d=0;d<a-b;d=d+1){
            printf(" ");
        }
        for (int c=0;c<b;c=c+1){
            printf("*");
        }
        printf("\n");
    }
}