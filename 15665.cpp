#include <stdio.h>
#include <stdlib.h>
int *k;
void c(int a,int b,int*h){
    int g,i[8],j=0,z;
    g=b;
    while(1){
        if(h[j]==0){
            break;
        }
        i[j]=h[j];
        j=j+1;
    }
    if(g==0){
        for(z=0;z<j;z=z+1){
            printf("%d ",k[i[z]-1]);
        }
        printf("\n");
    }
    else{
        for(z=1;z<=a;z=z+1){
            if(k[z-1]==k[z]){
                continue;
            }
            i[j]=z;
            i[j+1]=0;
            c(a,g-1,i);
        }
    }
}
int j(const void *a, const void *b){
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
    int a,b,e[8]={0,},z;
    scanf("%d %d",&a,&b);
    k=(int*)malloc(4*a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&k[z]);
    }
    qsort(k,a,4,j);
    c(a,b,e);
}