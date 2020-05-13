#include <stdio.h>
int main(){
    char a[10001];
    int b=2,c=0,d=0;
    scanf("%s",a);
    while(1){
        if(a[b]==0){
            printf("%d\n%d",c,d);
            break;
        }
        if(a[b-2]=='J'&&a[b-1]=='O'&&a[b]=='I'){
            c=c+1;
        }
        else if(a[b-2]=='I'&&a[b-1]=='O'&&a[b]=='I'){
            d=d+1;
        }
        b=b+1;
    }
}