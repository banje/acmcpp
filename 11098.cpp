#include <stdio.h>
int main(){
    int a,b,c,e,x,y,z;
    char d[21],f[21];
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b);
        e=0;
        for(y=0;y<b;y=y+1){
            scanf("%d %s",&c,d);
            if(e<c){
                e=c;
                for(x=0;x<21;x=x+1){
                    f[x]=d[x];
                }
            }
        }
        printf("%s\n",f);
    }
}