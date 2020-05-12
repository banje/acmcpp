#include <stdio.h>
#include <stdlib.h>
struct a{
    int b,c;
} *b;
int A(const void *a,const void *c){
    struct a d=*(struct a *)a,e=*(struct a *)c;
    if(d.c>e.c){
        return 1;
    }
    if(d.c<e.c){
        return -1;
    }
    if(d.b>e.b){
        return 1;
    }
    if(d.b<e.b){
        return -1;
    }
    return 0;
}
int main(){
    int c,z;
    scanf("%d",&c);
    b=(struct a *)malloc(sizeof(struct a)*c);
    for(z=0;z<c;z=z+1){
        scanf("%d %d",&b[z].b,&b[z].c);
    }
    qsort(b,c,sizeof(struct a),A);
    for(z=0;z<c;z=z+1){
        printf("%d %d\n",b[z].b,b[z].c);
    }
}