#include <stdio.h>
#include <stdlib.h>
void c(int*a,int b,int*h,int k){
    int d[9]={0,},e=k,f[9]={0,},g=b,i[9]={0,},j=0,x,y,z;
    for(z=0;z<e;z=z+1){
        d[z]=a[z];
    }
    while(1){
        if(h[j]==0){
            break;
        }
        i[j]=h[j];
        j=j+1;
    }
    if(g==0){
        for(z=0;z<j;z=z+1){
            printf("%d ",i[z]);
        }
        printf("\n");
    }
    else{
        for(z=0;z<e;z=z+1){
            x=0;
            y=0;
            while(1){
                if(x==e){
                    break;
                }
                if(x==z){
                    x=x+1;
                }
                else{
                    f[y]=d[x];
                    x=x+1;
                    y=y+1;
                }
            }
            i[j]=d[z];
            c(f,g-1,i,e-1);
        }
    }
}
int f(const void *a, const void *b){
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
    int a,b,*d,e[9]={0,},z;
    scanf("%d %d",&a,&b);
    d=(int*)malloc(4*a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&d[z]);
    }
    qsort(d,a,4,f);
    c(d,b,e,a);
}