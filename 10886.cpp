#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int c=0;
    int d=0;
    for (1;a!=0;a=a-1){
        int b;
        scanf("%d",&b);
        if (b){
            c=c+1;
        }
        else{
            d=d+1;
        }
    }
    if (d>c){
        printf("Junhee is not cute!");
    }
    else{
        printf("Junhee is cute!");
    }
}