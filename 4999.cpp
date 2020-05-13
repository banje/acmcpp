#include <stdio.h>
int main(){
    char a[1001],b[1001];
    int c=0;
    scanf("%s\n%s",a,b);
    while(1){
        if(b[c]==0){
            printf("go");
            break;
        }
        if(a[c]==0){
            printf("no");
            break;
        }
        c=c+1;
    }
}