#include <stdio.h>
int main(){
    int a[26]={0,},c,d,y,z;
    char b;
    scanf("%d\n",&d);
    for(y=0;y<d;y=y+1){
        while(1){
            scanf("%c",&b);
            if(b=='\n'){
                c=0;
                for(z=0;z<26;z=z+1){
                    if(a[z]==0){
                        c=1;
                        break;
                    }
                }
                if(c==0){
                    printf("pangram\n");
                }
                else{
                    printf("missing ");
                    for(z=0;z<26;z=z+1){
                        if(a[z]==0){
                            printf("%c",z+97);
                        }
                    }
                    printf("\n");
                }
                for(z=0;z<26;z=z+1){
                    a[z]=0;
                }
                break;
            }
            else{
                if(b>=97){
                    a[b-97]=a[b-97]+1;
                }
                else if(b>=65){
                    a[b-65]=a[b-65]+1;
                }
            }
        }
    }
}