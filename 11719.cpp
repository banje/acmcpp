#include <stdio.h>
int main(){
    char a[101];
    int b;
    while(1){
        b=scanf("%[^\n]s",a);
        if (b==-1){
            break;
        }
        if(b==0){
            printf("\n");
        }
        else{
            printf("%s\n",a);
        }
        scanf("%c",a);
    }
}