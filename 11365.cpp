#include <stdio.h>
int main(){
    char a[501];
    int b,z;
    while(1){
        scanf("%[^\n]s",a);
        if(a[0]=='E'&&a[1]=='N'&&a[2]=='D'&&a[3]=='\0'){
            break;
        }
        b=0;
        while(1){
            if(a[b]=='\0'){
                break;
            }
            b=b+1;
        }
        for(z=b-1;z>=0;z=z-1){
            printf("%c",a[z]);
        }
        scanf("%c",a);
        printf("\n");
    }
}