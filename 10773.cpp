#include <stdio.h>
int main(){
    int a,b[100001],c,d=0,y=0,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&c);
        if(c==0){
            if(y!=0){
                y=y-1;
            }
        }
        else{
            b[y]=c;
            y=y+1;
        }
    }
    for(z=0;z<y;z=z+1){
        d=d+b[z];
    }
    printf("%d",d);
}