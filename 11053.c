#include <stdio.h>
int main(){
    int a,b[1001],c,d,e=0,y,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b[z]);
    }
    for(z=0;z<a;z=z+1){
        c=1;
        d=b[z];
        for(y=z+1;y<a;y=y+1){
            if(b[y]>d){
                c=c+1;
                d=b[y];
            }
        }
        if(c>e){
            e=c;
        }
    }
    printf("%d",e);
}