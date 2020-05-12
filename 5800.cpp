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
    int a,b,d[50],e,f,y,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b);
        for(y=0;y<b;y=y+1){
            scanf("%d",&d[y]);
        }
        qsort(d,b,4,c);
        f=0;
        for(y=1;y<b;y=y+1){
            e=d[y]-d[y-1];
            if(e<0){
                e=0-e;
            }
            if(e>f){
                f=e;
            }
        }
        printf("Class %d\nMax %d, Min %d, Largest gap %d\n",z+1,d[0],d[b-1],f);
    }
}