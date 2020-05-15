#include <stdio.h>
int main(){
    int a=0,b=0,d;
    char c;
    while(1){
        d=scanf("%c",&c);
        if(d==-1){
            b=b+a;
            break;
        }
        if(c=='\n'){
            continue;
        }
        else if(c==','){
            b=b+a;
            a=0;
        }
        else{
            a=a*10+c-48;
        }
    }
    printf("%d",b);
}