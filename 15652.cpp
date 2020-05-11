#include <stdio.h>
void c(int a,int b,int d,int*e){
    int f[9]={0,},y=0,z;
    while(1){
        f[y]=e[y];
        if(e[y]==0){
            break;
        }
        y=y+1;
    }
    if(d==0){
        y=0;
        while(1){
            if(f[y]==0){
                break;
            }
            printf("%d ",f[y]);
            y=y+1;
        }
        printf("\n");
        return;
    }
    for(z=a;z<=b;z=z+1){
        f[y]=z;
        c(z,b,d-1,f);
    }
}
int main(){
    int a,b,d[9]={0,};
    scanf("%d %d",&a,&b);
    c(1,a,b,d);
}