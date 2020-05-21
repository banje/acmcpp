#include <stdio.h>
int main(){
    int a,b,c,d,e[100001]={0},y,z;
    scanf("%d %d",&a,&b);
    for(z=1;z<=a;z=z+1){
        scanf("%d %d",&c,&d);
        for(y=b;y>=c;y=y-1){
            if(e[y-c]+d>e[y]){
                e[y]=e[y-c]+d;
            }
        }
    }
    printf("%d",e[b]);
}