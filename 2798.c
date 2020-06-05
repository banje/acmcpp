#include <stdio.h>
#include <stdlib.h>
int d(const void *a,const void *b){
    int c=*(int*)a,d=*(int*)b;
    if(c>d){
        return 1;
    }
    else if(c<d){
        return -1;
    }
    return 0;
}
int main(){
    int a,b,c[100],e=0,f,x,y,z;
    scanf("%d %d",&a,&b);
    for(z=0;z<a;z=z+1){
        scanf("%d",&c[z]);
    }
    qsort(c,a,sizeof(int),d);
    for(z=0;z<a-2;z=z+1){
        f=c[z]+c[z+1]+c[z+2];
        if(f>b){
            break;
        }
        else if(f>e){
            e=f;
        }
        for(y=z+1;y<a-1;y=y+1){
            f=c[z]+c[y]+c[y+1];
            if(f>b){
                break;
            }
            else if(f>e){
                e=f;
            }
            for(x=y+2;x<a;x=x+1){
                f=c[z]+c[y]+c[x];
                if(f>b){
                    break;
                }
                else if(f>e){
                    e=f;
                }
            }
        }
    }
    printf("%d",e);
}