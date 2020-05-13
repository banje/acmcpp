#include <stdio.h>
int main(){
    char a[101];
    int b,c,d,e,f,g;
    while(1){
        b=scanf("%[^\n]s",a);
        if (b==-1){
            break;
        }
        c=0,d=0,e=0,f=0,g=0;
        while(1){
            if(a[c]>=97){
                d=d+1;
            }
            else if(65<=a[c]&&a[c]<=90){
                e=e+1;
            }
            else if(a[c]==' '){
                g=g+1;
            }
            else if(a[c]==0){
                break;
            }
            else if(a[c]<=57){
                f=f+1;
            }
            c=c+1;
        }
        printf("%d %d %d %d\n",d,e,f,g);
        scanf("%c",a);
    }
}