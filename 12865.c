#include <stdio.h>
int e[101][100001];
int main(){
    int a,b,c,d,f,g,y,z;
    scanf("%d %d",&a,&b);
    for(z=1;z<=a;z=z+1){
        scanf("%d %d",&c,&d);
        for(y=1;y<=b;y=y+1){
            f=e[z-1][y];
            if(y>=c){
                g=e[z-1][y-c]+d;
                if(g>f){
                    f=g;
                }
            }
            e[z][y]=f;
        }
    }
    printf("%d",e[a][b]);
}