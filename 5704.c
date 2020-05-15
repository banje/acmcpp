#include <stdio.h>
int main(){
    int a[26]={0,},c,z;
    char b;
    while(1){
        scanf("%c",&b);
        if(b=='\n'){
            c=0;
            for(z=0;z<26;z=z+1){
                if(a[z]==0){
                    printf("N\n");
                    c=1;
                    break;
                }
            }
            if(c==0){
                printf("Y\n");
            }
            for(z=0;z<26;z=z+1){
                a[z]=0;
            }
        }
        else{
            if(b=='*'){
                break;
            }
            a[b-97]=a[b-97]+1;
        }
    }
}