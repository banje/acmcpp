#include <stdio.h>
int main(){
    int a,b[3],c[3],d,z;
    scanf("%d",&a);
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    for(z=1;z<a;z=z+1){
        c[0]=b[0];
        c[1]=b[1];
        c[2]=b[2];
        scanf("%d %d %d",&b[0],&b[1],&b[2]);
        if(c[1]<c[2]){
            b[0]=b[0]+c[1];
        }
        else{
            b[0]=b[0]+c[2];
        }
        if(c[0]<c[2]){
            b[1]=b[1]+c[0];
        }
        else{
            b[1]=b[1]+c[2];
        }
        if(c[0]<c[1]){
            b[2]=b[2]+c[0];
        }
        else{
            b[2]=b[2]+c[1];
        }
    }
    if(b[0]<b[1]){
        d=b[0];
    }
    else{
        d=b[1];
    }
    if(d>b[2]){
        d=b[2];
    }
    printf("%d",d);
}