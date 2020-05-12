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
    int a,*b,z;
    scanf("%d",&a);
    b=(int*)malloc(4*a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b[z]);
    }
    qsort(b,a,4,c);
    for(z=0;z<a;z=z+1){
        printf("%d\n",b[z]);
    }
}