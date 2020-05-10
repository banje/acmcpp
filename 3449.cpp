#include <stdio.h>
int main(){
    int a,d,e,z;
    char b[101],c[101];
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%s\n%s",b,c);
        d=0;
        e=0;
        while(1){
            if(b[e]==0){
                break;
            }
            if(b[e]!=c[e]){
                d=d+1;
            }
            e=e+1;
        }
        printf("Hamming distance is %d.\n",d);
    }
}