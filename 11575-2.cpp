#include <stdio.h>
int main(){
    int a,b,c,g,y,z;
    char d[1000000],e[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},f[26];
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d %d\n",&b,&c);
        for(y=0;y<26;y=y+1){
            f[y]=(b*(e[y]-13)+c)%26+65;
        }
        g=0;
        scanf("%s",d);
        while(1){
            if(d[g]==0){
                printf("%s\n",d);
                scanf("%c",d);
                break;
            }
            d[g]=f[d[g]-65];
            g=g+1;
        }
    }
}