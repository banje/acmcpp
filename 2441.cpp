#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int b=a;b>0;b=b-1){
        for (int d=0;d<a-b;d=d+1){
            printf(" ");
        }
        for (int c=0;c<b;c=c+1){
            printf("*");
        }
        printf("\n");
    }
}