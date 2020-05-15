#include <stdio.h>
int main(){
    int a,b=0,d,z;
    char c;
    scanf("%d\n",&d);
    for(z=0;z<d;z=z+1){
        b=0;
        while(1){
            scanf("%d%c",&a,&c);
            b=b+a;
            if(c=='\n'){
                break;
            }
        }
        printf("%d\n",b);
    }
}