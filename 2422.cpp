#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c,d,**e,f=0,g,y,z;
    scanf("%d %d",&a,&b);
    e=(int**)malloc(sizeof(int*)*(a+1));
    e[0]=(int*)malloc(sizeof(int)*(a+1)*(a+1));
    for(z=1;z<a;z=z+1){
        e[z]=e[z-1]+a+1;
    }
    for(z=1;z<a-1;z=z+1){
        for(y=z+1;y<a;y=y+1){
            e[z][y]=a-y;
        }
    }
    for(z=0;z<b;z=z+1){
        scanf("%d %d",&c,&d);
        if(d<c){
            g=d;
            d=c;
            c=g;
        }
        e[c][d]=0;
        for(y=d-1;y>c;y=y-1){
            if (e[c][y]>0){
                e[c][y]=e[c][y]-1;
            }
        }
        for(y=c-1;y>0;y=y-1){
            if (e[y][c]>0){
                e[y][c]=e[y][c]-1;
            }
        }
    }
    for(z=1;z<a-1;z=z+1){
        for(y=z+1;y<a;y=y+1){
            f=f+e[z][y];
        }
    }
    printf("%d",f);
}