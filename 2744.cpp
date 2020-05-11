#include <stdio.h>
int main(){
    char a[102];
    int z=0;
    scanf("%s",a);
    while(1){
        if(a[z]==0){
            break;
        }
        if(a[z]>96){
            printf("%c",a[z]-32);
        }
        else{
            printf("%c",a[z]+32);
        }
        z=z+1;
    }
}