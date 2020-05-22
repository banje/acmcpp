#include <stdio.h>
int main(){
    int a,b=1,c;
    scanf("%d",&a);
    c=a%10*10+(a/10+a%10)%10;
    while(c!=a){
        c=c%10*10+(c/10+c%10)%10;
        b=b+1;
    }
    printf("%d",b);
}