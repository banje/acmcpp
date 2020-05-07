#include <stdio.h>
int main(){
    int a,b,c,z;
    scanf("%d",&a);
    for(z=1;z<a;z=z+1){
        b=z;
        c=z;
        while(c!=0){
            b=b+c%10;
            c=c/10;
        }
        if(b==a){
            printf("%d",z);
            return 0;
        }
    }
    printf("0");
    return 0;
}