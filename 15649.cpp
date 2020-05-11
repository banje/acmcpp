#include <stdio.h>
void c(int*a,int b,int*h){
    int d[9],e=0,f[9]={0,},g,i[9]={0,},j=0,x,y,z;
    g=b;
    while(1){
        d[e]=a[e];
        if(a[e]==0){
            break;
        }
        e=e+1;
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
                if(d[x]==0){
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
            c(f,g-1,i);
        }
    }
}
int main(){
    int a,b,d[9]={0,},e[9]={0,},z;
    scanf("%d %d",&a,&b);
    for(z=0;z<a;z=z+1){
        d[z]=z+1;
    }
    c(d,b,e);
}