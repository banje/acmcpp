#include <stdio.h>
int main(){
    unsigned int a=0,d=500000,z;
    long long c=0;
    char b[10];
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    for(;d!=0;){
        fgets(b,10,stdin);
        z=0;
        while(b[z]!='\n'){
            a=a*10+b[z]-'0';
            z=z+1;
        }
        c=c+a;
        a=0;
        d=d-1;
    }
    printf("500000\n%lld",c);
}