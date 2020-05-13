#include <stdio.h>
int main(){
    int a[6]={1,1,2,2,2,8},b,z;
    for(z=0;z<6;z=z+1){
        scanf("%d",&b);
        printf("%d ",a[z]-b);
    }
}