#include <stdio.h>
int main(){
    int a,b=0;
    char c;
    while(1){
        scanf("%d%c",&a,&c);
        b=b+a;
        if(c=='\n'){
            break;
        }
    }
    printf("%d",b);
}