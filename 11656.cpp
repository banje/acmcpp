#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct A{
    char a[1001];
};
int e(const void *a, const void *b){
    struct A c=*(struct A*)a, d=*(struct A*)b;
    return strcmp(c.a,d.a);
}
int main(){
    struct A b[1001];
    char c[1001];
    int d,y,z;
    scanf("%s",c);
    d=strlen(c);
    for(z=0;z<d;z=z+1){
        for(y=z;y<d+1;y=y+1){
            b[z].a[y-z]=c[y];
        }
    }
    qsort(b,d,sizeof(struct A),e);
    for(z=0;z<d;z=z+1){
        printf("%s\n",b[z].a);
    }
}