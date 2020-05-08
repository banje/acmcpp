#include <stdio.h>
#include <stdlib.h>
int f(const void *c,const void *d){
    int a=*(int *)c;
    int b=*(int *)d;
    if(b>a){
        return -1;
    }
    else if(b==a){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int a,b,*c,d=0,e=0,z;
    scanf("%d %d",&a,&b);
    c=(int *)malloc(4*a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&c[z]);
    }
    qsort(c,a,4,f);
    for(z=0;z<a;z=z+1){
        if(e<c[z]){
            d=d+1;
            e=c[z]+b-1;
        }
    }
    printf("%d",d);
}