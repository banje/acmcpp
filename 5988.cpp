#include <stdio.h>
#include <string.h>

int main(){
    int a=0;
    scanf("%d",&a);
    for (1;a!=0;a=a-1){
        char b[62];
        scanf("%s",b);
        int c=strlen(b);
        int d=b[c-1];
        if (d%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
}