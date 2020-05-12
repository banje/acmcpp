#include <stdio.h>
int main(){
    int b=1;
    char a;
    while(1){
        scanf("%c",&a);
        if(a=='\n'){
            break;
        }
        if(a==','){
            b=b+1;
        }
    }
    printf("%d",b);
}