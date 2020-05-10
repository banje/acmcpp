#include <stdio.h>
int main(){
    char a;
    while(1){
        scanf("%1c",&a);
        if(a==10){
            break;
        }
        if(a>=65&&a<=90){
            printf("%c",a);
        }
    }
}