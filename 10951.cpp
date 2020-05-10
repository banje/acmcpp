#include <stdio.h>
int main(){
    while(1){
        int a,b,c;
        c=scanf("%d %d",&a,&b);
        if (c==EOF){
            break;
        }
        printf("%d\n",a+b);
    }
}