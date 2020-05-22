#include <stdio.h>
#include <stdlib.h>
int d[105][105];
int i(int a,int b){
    int c=0;
    if(d[a][b]==0){
        d[a][b]=1;
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
    int a,b,c,e,f,g,h,j[5001],k=0,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    for(z=0;z<b+2;z=z+1){
        d[0][z]=1;
        d[a+1][z]=1;
    }
    for(z=1;z<a+1;z=z+1){
        d[z][0]=1;
        d[z][b+1]=1;
    }
    for(z=0;z<c;z=z+1){
        scanf("%d %d %d %d",&e,&f,&g,&h);
        for(y=e+1;y<g+1;y=y+1){
            for(x=f+1;x<h+1;x=x+1){
                d[x][y]=1;
            }
        }
    }
    for(z=1;z<a+1;z=z+1){
        for(y=1;y<b+1;y=y+1){
            if(d[z][y]==0){
                j[k]=i(z,y);
                k=k+1;
            }
        }
    }
    qsort(j,k,sizeof(int),l);
    printf("%d\n",k);
    for(z=0;z<k;z=z+1){
        printf("%d ",j[z]);
    }
}