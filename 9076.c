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
    int a,b[5],y,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        for(y=0;y<5;y=y+1){
            scanf("%d",&b[y]);
        }
        qsort(b,5,4,c);
        if(b[3]-b[1]>=4){
            printf("KIN\n");
        }
        else{
            printf("%d\n",b[1]+b[2]+b[3]);
        }
    }
}