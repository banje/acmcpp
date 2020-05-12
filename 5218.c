#include <stdio.h>
int main(){
    int a,d,e,z;
    char b[21]={0,},c[21];
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%s %s",b,c);
        printf("Distances: ");
        d=0;
        while(1){
            if(b[d]==0){
                break;
            }
            e=c[d]-b[d];
            if(e<0){
                e=e+26;
            }
            printf("%d ",e);
            d=d+1;
        }
        printf("\n");
    }
}