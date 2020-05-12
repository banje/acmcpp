#include <stdio.h>
#include <stdlib.h>
int c(const void *a,const void *b){
    int c=*(int*)a,d=*(int*)b;
    if(c>d){
        return -1;
    }
    if(c<d){
        return 1;
    }
    return 0;
}
int main(){
    int a,b[8],d=0,e[5],z;
    for(z=0;z<8;z=z+1){
        scanf("%d",&a);
        b[z]=a*10+z+1;
    }
    qsort(b,8,4,c);
    for(z=0;z<5;z=z+1){
        d=d+b[z]/10;
    }
    printf("%d\n",d);
    for(z=0;z<5;z=z+1){
        e[z]=b[z]%10;
    }
    qsort(e,5,4,c);
    for(z=4;z>=0;z=z-1){
        printf("%d ",e[z]);
    }
}