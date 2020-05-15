#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int e(const void *a, const void *b){
    const char *c=(char*)a, *d=(char*)b;
    return strcmp(c,d);
}
int main(){
    char a[1001],b[1001];
    int c=1,d;
    while(1){
        scanf("%s\n%s",a,b);
        if(strcmp(a,"END")==0){
            if(strcmp(b,"END")==0){
                break;
            }
        }
        d=strlen(a);
        qsort(a,d,1,e);
        qsort(b,d,1,e);
        if(strcmp(a,b)==0){
            printf("Case %d: same\n",c);
        }
        else{
            printf("Case %d: different\n",c);
        }
        c=c+1;
    }
}