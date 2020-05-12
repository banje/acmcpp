#include <stdio.h>
int main(){
    int a,b,c,d[501],e,f,y,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d %d",&b,&c);
        e=0;
        for(y=1;y<c+1;y=y+1){
            d[y]=0;
        }
        for(y=0;y<b;y=y+1){
            scanf("%d",&f);
            if(d[f]==0){
                d[f]=1;
            }
            else{
                e=e+1;
            }
        }
        printf("%d\n",e);
    }
}