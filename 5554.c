#include <stdio.h>
int main(){
    int a,b=0,z;
    for(z=0;z<4;z=z+1){
        scanf("%d",&a);
        b=b+a;
    }
    printf("%d\n%d",b/60,b%60);
}