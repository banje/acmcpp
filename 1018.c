#include <stdio.h>
int main(){
    int a,b,d,e,f,g=64,w,x,y,z;
    char c[51][51];
    scanf("%d %d",&a,&b);
    for(z=0;z<a;z=z+1){
        scanf("%s",c[z]);
    }
    for(z=0;z<=a-8;z=z+1){
        for(y=0;y<=b-8;y=y+1){
            d=0;
            e=0;
            f=0;
            for(x=z;x<z+8;x=x+1){
                f=!f;
                for(w=y;w<y+8;w=w+1){
                    if(c[x][w]=='B'){
                        if(f==0){
                            d=d+1;
                        }
                        else{
                            e=e+1;
                        }
                    }
                    else{
                        if(f==0){
                            e=e+1;
                        }
                        else{
                            d=d+1;
                        }
                    }
                    f=!f;
                }
            }
            if(d<g){
                g=d;
            }
            if(e<g){
                g=e;
            }
        }
    }
    printf("%d",g);
}