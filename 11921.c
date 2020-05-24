#include <stdio.h>
char b[450000];
int main(){
    unsigned int a=0,d=5,y=0,z=0;
    long long c=0;
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    for(;d!=0;){
        b[z]=getchar();
        if(b[z]=='\n'){
            d=d-1;
        }
        z=z+1;
    }
    for(;y<=z;y=y+1){
        if(b[y]=='\n'){
            c=c+a;
            a=0;
        }
        else{
            a=a*10+b[y]-'0';
        }
    }
    printf("5\n%lld",c);
}