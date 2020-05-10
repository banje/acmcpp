#include <stdio.h>
int main(){
    int a,b,c=0,y,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b);
        if(b!=1){
            for(y=2;y<b;y=y+1){
                if(b%y==0){
                    c=c+1;
                    break;
                }
            }
        }
        else if(b<=3){
            c=c+1;
        }
    }
    printf("%d",a-c);
}