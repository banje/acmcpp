#include <stdio.h>
#include <stdlib.h>
int f(int a,int b,char**c,char**e){
    int d=0;
    if(c[a][b]!='#'){
        if(e[a][b]==0){
            e[a][b]=1;
            d=d+f(a-1,b,c,e);
            d=d+f(a+1,b,c,e);
            d=d+f(a,b+1,c,e);
            d=d+f(a,b-1,c,e);
            if(c[a][b]=='o'){
                d=d+65536;
            }
            else if(c[a][b]=='v'){
                d=d+1;
            }
        }
    }
    return d;
}
int main(){
    int a,b,g,h,i=0,j=0,y,z;
    char **c,d,**e;
    scanf("%d %d\n",&a,&b);
    c=(char**)malloc(sizeof(char*)*(a+2));
    c[0]=(char*)malloc(sizeof(char)*(a+2)*(b+2));
    e=(char**)malloc(sizeof(char*)*(a+2));
    e[0]=(char*)malloc(sizeof(char)*(a+2)*(b+2));
    for(z=1;z<a+2;z=z+1){
        c[z]=c[z-1]+b+2;
        e[z]=e[z-1]+b+2;
    }
    for(y=0;y<b+2;y=y+1){
        c[0][y]='#';
        c[a+1][y]='#';
    }
    for(z=1;z<a+1;z=z+1){
        for(y=1;y<b+1;y=y+1){
            scanf("%1c",c[z]+y);
            e[z][y]=0;
        }
        c[z][0]='#';
        c[z][b+1]='#';
        scanf("%1c",&d);
    }
    for(z=1;z<a+1;z=z+1){
        for(y=1;y<b+1;y=y+1){
            if(e[z][y]==0){
                if(c[z][y]!='#'){
                    g=f(z,y,c,e);
                    h=g/65536;
                    g=g-h*65536;
                    if (h>g){
                        i=i+h;
                    }else{
                        j=j+g;
                    }
                }
            }
        }
    }
    printf("%d %d",i,j);
}