#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b=1;
    while(a>=b){
        printf("%d\n",b);
        b=b+1;
    }
    return 0;
}