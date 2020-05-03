#include <stdio.h>

int main(){
    int a=0;
    scanf("%d",&a);
    for (1;a!=0;a=a-1){
        int b=0;
        scanf("%d",&b);
        for (b;b!=0;b=b-1){
            printf("=");
        }
        printf("\n");
    }
}