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
    int a,b[10],y,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        for(y=0;y<10;y=y+1){
            scanf("%d",&b[y]);
        }
        qsort(b,10,4,c);
        printf("%d\n",b[7]);
    }
}