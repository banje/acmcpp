#include <stdio.h>
#include <stdlib.h>
char d[27][27];
int i(int a,int b){
    int c=0;
    if(d[a][b]=='1'){
        d[a][b]=0;
        c=c+1;
        c=c+i(a-1,b);
        c=c+i(a+1,b);
        c=c+i(a,b-1);
        c=c+i(a,b+1);
    }
    return c;
}
int l(const void *a,const void *b){
    int c=*(int *)a,e=*(int *)b;
    if(c>e){
        return 1;
    }
    else if (c<e){
        return -1;
    }
    return 0;
}
int main(){
    int a,j[5001],k=0,y,z;
    scanf("%d",&a);
    getchar();
    for(z=1;z<a+1;z=z+1){
        for(y=1;y<a+1;y=y+1){
            d[z][y]=getchar();
        }
        getchar();
    }
    for(z=1;z<a+1;z=z+1){
        for(y=1;y<a+1;y=y+1){
            if(d[z][y]=='1'){
                j[k]=i(z,y);
                k=k+1;
            }
        }
    }
    qsort(j,k,sizeof(int),l);
    printf("%d\n",k);
    for(z=0;z<k;z=z+1){
        printf("%d\n",j[z]);
    }
}