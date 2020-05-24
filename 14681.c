#include <stdio.h>
int main(){
    int a,b,c=1;
    scanf("%d\n%d",&a,&b);
    if(a>0){
        if(b<0){
            c=4;
        }
    }
    else{
        if(b>0){
            c=2;
        }
        else{
            c=3;
        }
    }
    printf("%d",c);
}