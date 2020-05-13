#include <stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e=a+b+c+d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(e>a+b+c+d){
        printf("%d",e);
    }
    else{
        printf("%d",a+b+c+d);
    }
}