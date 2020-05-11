#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b[100002],x,y,z;
    char*c,d[102];
    scanf("%d",&a);
    c=(char*)malloc(sizeof(char)*a*102);
    for(z=0;z<a;z=z+1){
        scanf("%d %s",&b[z],d);
        x=0;
        while(1){
            c[102*z+x]=d[x];
            if(d[x]==0){
                break;
            }
            x=x+1;
        }
    }
    for(z=1;z<=200;z=z+1){
        for(x=0;x<a;x=x+1){
            if(b[x]==z){
                printf("%d ",z);
                y=0;
                while(1){
                    if(c[102*x+y]==0){
                        break;
                    }
                    printf("%c",c[102*x+y]);
                    y=y+1;
                }
                printf("\n");
            }
        }
    }
}