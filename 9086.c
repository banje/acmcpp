#include <stdio.h>
int main(){
    int a,c,z;
    char b[1000];
    scanf("%d\n",&a);
    for(z=0;z<a;z=z+1){
        scanf("%s",b);
        printf("%c",b[0]);
        c=1;
        while(1){
            if(b[c]==0){
                break;
            }
            c=c+1;
        }
        printf("%c\n",b[c-1]);
    }
}