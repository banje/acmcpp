#include <stdio.h>
int main(){
    int a,b,z;
    scanf("%d",&a);
    for(z=0;z<9;z=z+1){
        scanf("%d",&b);
        a=a-b;
    }
    printf("%d",a);
}