#include <stdio.h>
int main(){
    int a,b[101],c,d=0,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b[z]);
    }
    scanf("%d",&c);
    for(z=0;z<a;z=z+1){
        if(b[z]==c){
            d=d+1;
        }
    }
    printf("%d",d);
}