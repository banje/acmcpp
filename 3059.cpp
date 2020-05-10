#include <stdio.h>
int main(){
    int a,c[26],d,x,y,z;
    char b[1002];
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        for(x=0;x<26;x=x+1){
            c[x]=0;
        }
        d=0;
        scanf("%s",b);
        y=0;
        while(1){
            if(b[y]==0){
                break;
            }
            c[b[y]-65]=1;
            y=y+1;
        }
        for(x=0;x<26;x=x+1){
            if(c[x]==0){
                d=d+x+65;
            }
        }
        printf("%d\n",d);
    }
}