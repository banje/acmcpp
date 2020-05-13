#include <stdio.h>
int main(){
    int a,d,z;
    char b[50],c[50];
    scanf("%d",&a);
    scanf("%s",b);
    for(z=0;z<a-1;z=z+1){
        scanf("%s",c);
        d=0;
        while(1){
            if(b[d]==0){
                break;
            }
            if(b[d]!=c[d]){
                b[d]='?';
            }
            d=d+1;
        }
    }
    printf("%s",b);
}