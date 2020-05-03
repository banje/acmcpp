#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int f=a*b;
    while (a!=b){
        if (b>a){
            int c=b;
            b=a;
            a=c;
        }
        int d=a-b;
        a=d;
    }
    printf("%d\n%d",a,f/a);
}