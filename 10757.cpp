#include <stdio.h>
int main(){
    char a[10014],b[10014],e[10014];
    int c=0,d=0,f,g=0,h,i,z=0;
    scanf("%s %s",a,b);
    while(1){
        if(a[c]==0){
            break;
        }
        c=c+1;
    }
    while(1){
        if(b[d]==0){
            break;
        }
        d=d+1;
    }
    c=c-1;
    d=d-1;
    while(1){
        if(c<0){
            if(d<0){
                if(g==1){
                    e[z]=1;
                }
                else{
                    z=z-1;
                }
                break;
            }
            h=48;
        }
        else{
            h=a[c];
        }
        if(d<0){
            i=48;
        }
        else{
            i=b[d];
        }
        f=h+i+g-96;
        g=0;
        if(f>=10){
            g=1;
            f=f-10;
        }
        e[z]=f;
        c=c-1;
        d=d-1;
        z=z+1;
    }
    for(;z>=0;z=z-1){
        printf("%d",e[z]);
    }
}
