#include <stdio.h>
int main(){
    int a,b,c=0,z;
    scanf("%d %d",&a,&b);
    while(a>=b){
        a=a-b;
        c=c+1;
    }
    printf("%d",c);
    if(a==0){
        return 0;
    }
    printf(".");
    for(z=0;z<1002;z=z+1){
        if(a==0){
            break;
        }
        c=0;
        a=a*10;
        while(a>=b){
            a=a-b;
            c=c+1;
        }
        printf("%d",c);
    }
}