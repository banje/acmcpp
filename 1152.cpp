#include <stdio.h>
#include <string.h>
int main(){
    char a[1000000];
    int b,c=0,z;
    scanf("%[^\n]s",a);
    b=strlen(a);
    for(z=0;z<b;z=z+1){
        if(a[z]!=' '){
            c=1;
            break;
        }
    }
    if(c!=0){
        for (z=1;z<b-1;z=z+1){
            if (a[z]==' '){
                c=c+1;
            }
        }
    }
    printf("%d",c);
}