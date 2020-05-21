#include <stdio.h>
#include <stdlib.h>
int a,b,**c,**d;
int i(int e,int f,int g,int h){
    if((e==g)&&(f==h)){
        return 0;
    }
    if(e!=0){
        if(c[e-1][f]!=0){
            c[e-1][f]=0;
            if(d[e-1][f]=='.'){
                if(i(e-1,f,g,h)==0){
                    return 0;
                }
            }
        }
    }
    if(e!=a-1){
        if(c[e+1][f]!=0){
            c[e+1][f]=0;
            if(d[e+1][f]=='.'){
                if(i(e+1,f,g,h)==0){
                    return 0;
                }
            }
        }
    }
    if(f!=0){
        if(c[e][f-1]!=0){
            c[e][f-1]=0;
            if(d[e][f-1]=='.'){
                if(i(e,f-1,g,h)==0){
                    return 0;
                }
            }
        }
    }
    if(f!=b-1){
        if(c[e][f+1]!=0){
            c[e][f+1]=0;
            if(d[e][f+1]=='.'){
                if(i(e,f+1,g,h)==0){
                    return 0;
                }
            }
        }
    }
    return 1;
}
int main(){
    int e[2],f[2],g=0,h=1,y,z;
    scanf("%d %d",&a,&b);
    c=(int**)malloc(sizeof(int*)*a);
    c[0]=(int*)malloc(sizeof(int)*a*b);
    d=(int**)malloc(sizeof(int*)*a);
    d[0]=(int*)malloc(sizeof(int)*a*b);
    for(z=1;z<a;z=z+1){
        c[z]=c[z-1]+b;
    }
    for(z=1;z<a;z=z+1){
        d[z]=d[z-1]+b;
    }
    getchar();
    for(z=0;z<a;z=z+1){
        for(y=0;y<b;y=y+1){
            d[z][y]=getchar();
            if(d[z][y]=='.'){
                d[z][y]=0;
            }
            if(d[z][y]=='L'){
                if(g==0){
                    e[0]=z;
                    e[1]=y;
                    g=1;
                }
                else{
                    f[0]=z;
                    f[1]=y;
                }
                d[z][y]=0;
            }
        }
        getchar();
    }
    while(1){
        for(z=0;z<a;z=z+1){
            for(y=0;y<b;y=y+1){
                if(d[z][y]=='.'){
                    c[z][y]='.';
                }
                else if(d[z][y]=='X'){
                    c[z][y]='X';
                }
            }
        }
        for(z=0;z<a;z=z+1){
            for(y=0;y<b;y=y+1){
                if(c[z][y]=='.'){
                    if(z!=0){
                        if(d[z-1][y]=='X'){
                            d[z-1][y]=h;
                        }
                    }
                    if(y!=0){
                        if(d[z][y-1]=='X'){
                            d[z][y-1]=h;
                        }
                    }
                    if(z!=(a-1)){
                        if(d[z+1][y]=='X'){
                            d[z+1][y]=h;
                        }
                    }
                    if(y!=(b-1)){
                        if(d[z][y+1]=='X'){
                            d[z][y+1]=h;
                        }
                    }
                }
            }
        }
        h=h+1;
    }
    c[e[0]][e[1]]=0;
    if(i(e[0],e[1],f[0],f[1])==0){
        printf("%d",h);
    }
    h=h+1;
}