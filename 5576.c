#include <stdio.h>
#include <stdlib.h>
int c(const void *a,const void *b){
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
    int a[10],b[10],z;
    for(z=0;z<10;z=z+1){
        scanf("%d",&a[z]);
    }
    for(z=0;z<10;z=z+1){
        scanf("%d",&b[z]);
    }
    qsort(a,10,4,c);
    qsort(b,10,4,c);
    printf("%d %d",a[7]+a[8]+a[9],b[7]+b[8]+b[9]);
}