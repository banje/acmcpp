#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d;
    if (a>b){
        if (a>c){
            if (b>c){
                d=b;
            }
            else{
                d=c;
            }
        }
        else{
            d=a;
        }
    }
    else{
        if (b>c){
            if (a>c){
                d=a;
            }
            else{
                d=c;
            }
        }
        else{
            d=b;
        }
    }
    printf("%d",d);
}