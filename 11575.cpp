#include <stdio.h>
int main(){
    int a,b,c,z;
    char d;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d %d\n",&b,&c);
        b=b%26;
        c=c%26;
        while(1){
            scanf("%c",&d);
            if(d=='\n'){
                printf("\n");
                break;
            }
            printf("%c",(b*(d-65)+c)%26+65);
        }
    }
}