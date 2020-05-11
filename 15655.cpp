#include <stdio.h>
#include <stdlib.h>
int *h;
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
            printf("%d ",h[f[y]-1]);
            y=y+1;
        }
        printf("\n");
        return;
    }
    for(z=a+1;z<=b;z=z+1){
        f[y]=z;
        c(z,b,d-1,f);
    }
}
int g(const void *a, const void *b){
    int c=*(int*)a,d=*(int*)b;
    if(c>d){
        return 1;
    }
    if(c<d){
        return -1;
    }
    return 0;
}
int main(){
    int a,b,d[9]={0,},z;
    scanf("%d %d",&a,&b);
    h=(int*)malloc(4*a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&h[z]);
    }
    qsort(h,a,4,g);
    c(0,a,b,d);

}