#include <stdio.h>
#include <stdlib.h>
int d(const void *a,const void *b){
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
    char a;
    int b[10],c=0,z;
    while(1){
        scanf("%c",&a);
        if(a=='\n'){
            break;
        }
        b[c]=a-48;
        c=c+1;
    }
    qsort(b,c,4,d);
    for(z=0;z<c;z=z+1){
        printf("%d",b[z]);
    }
}