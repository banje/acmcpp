#include <stdio.h>
int main(){
    char a;
    int b=0;
    while(1){
        scanf("%c",&a);
        if(a=='\n'){
            break;
        }
        b=b+1;
    }
    printf("%d",b);
}