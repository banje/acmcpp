#include <stdio.h>
int main(){
    int a,b,x,y,z;
    char c[22];
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d %s",&b,c);
        y=0;
        while (1){
            if (c[y]==0){
                break;
            }
            for (x=0;x<b;x=x+1){
                printf("%c",c[y]);
            }
            y=y+1;
        }
        printf("\n");
    }
}