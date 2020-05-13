#include <stdio.h>
int main(){
    char a[10]="CAMBRIDGE",b;
    int c,z;
    while(1){
        scanf("%c",&b);
        if(b=='\n'){
            break;
        }
        c=0;
        for(z=0;z<10;z=z+1){
            if(a[z]==b){
                c=1;
                break;
            }
        }
        if(c==0){
            printf("%c",b);
        }
    }
}