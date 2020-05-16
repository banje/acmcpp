#include <stdio.h>
int main(){
    int a,b[51],c,z;
    double d;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b[z]);
    }
    for(z=0;z<a;z=z+1){
        c=z;
        while(1){
            if(c==0){
                break;
            }
            c=c-1;
            d=(b[z]-b[c])/(z-c);
        }
    }
}