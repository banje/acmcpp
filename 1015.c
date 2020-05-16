#include <stdio.h>
#include <stdlib.h>
struct A{
    int a;
    int b;
    int c;
};
int b(const void *a,const void *b){
    struct A c=*(struct A*)a,d=*(struct A*)b;
    if(c.a>d.a){
        return 1;
    }
    else if(c.a<d.a){
        return -1;
    }
    else if(c.b>d.b){
        return 1;
    }
    else if(c.b<d.b){
        return -1;
    }
    else{
        return 0;
    }
};
int d(const void *a,const void *b){
    struct A c=*(struct A*)a,d=*(struct A*)b;
    if(c.b>d.b){
        return 1;
    }
    else if(c.b<d.b){
        return -1;
    }
    else{
        return 0;
    }
};
int main(){
    int a,z;
    struct A c[51];
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&c[z].a);
        c[z].b=z;
    }
    qsort(c,a,sizeof(struct A),b);
    for(z=0;z<a;z=z+1){
        c[z].c=z;
    }
    qsort(c,a,sizeof(struct A),d);
    for(z=0;z<a;z=z+1){
        printf("%d ",c[z].c);
    }
}