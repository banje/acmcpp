#include <stdio.h>
#include <string.h>
int main(){
    char a[8],b[8];
    int c,d,e,z;
    scanf("%s %s",a,b);
    c=strlen(a);
    d=strlen(b);
    if(c>d){
        e=c;
        c=c-d;
        d=0;
        for(z=0;z<c;z=z+1){
            printf("%c",a[z]);
        }
    }
    else{
        e=d;
        d=d-c;
        c=0;
        for(z=0;z<d;z=z+1){
            printf("%c",b[z]);
        }
    }
    for(;z<e;z=z+1){
        printf("%d",a[z-d]+b[z-c]-96);
    }
}