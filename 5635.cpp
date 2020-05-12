#include <stdio.h>
int main(){
    int a,c,d,e,f=0,g=20120000,h,y,z;
    char b[16],l[16],m[16];
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%s %d %d %d",b,&c,&d,&e);
        h=c+100*d+10000*e;
        if(h>f){
            f=h;
            for(y=0;y<16;y=y+1){
                l[y]=b[y];
            }
        }
        if(h<g){
            g=h;
            for(y=0;y<16;y=y+1){
                m[y]=b[y];
            }
        }
    }
    printf("%s\n%s\n",l,m);
}