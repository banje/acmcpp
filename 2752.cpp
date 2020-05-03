#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d;
    if (a>b){
        if (a>c){
            if (b>c){
            }
            else{
                d=b;
                b=c;
                c=d;
            }
        }
        else{
            d=a;
            a=c;
            c=b;
            b=d;
        }
    }
    else{
        if (b>c){
            if (a>c){
                d=a;
                a=b;
                b=d;
            }
            else{
                d=c;
                c=a;
                a=b;
                b=d;
            }
        }
        else{
            d=c;
            c=a;
            a=d;
        }
    }
    printf("%d %d %d",c,b,a);
}