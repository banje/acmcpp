#include <stdio.h>
int main(){
    int a,b[1002],c[1002],d=1,y=0,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b[z]);
    }
    z=0;
    while(1){

        if(b[z]==d){
            d=d+1;
            z=z+1;
        }
        else if(c[y]==d){
            d=d+1;
            y=y-1;
        }
        else if(d>a){
            printf("Nice");
            break;
        }
        else if(z==a){
            printf("Sad");
            break;
        }
        else{
            y=y+1;
            c[y]=b[z];
            z=z+1;
        }
    }
}