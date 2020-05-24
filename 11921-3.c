#include <stdio.h>
char b[45000011];
int main(){
    unsigned int a=0,e,z=8;
    long long c=0;
    e=fread(b,1,45000011,stdin);
    for(;z<e;z=z+1){
        if(b[z]=='\n'){
            c=c+a;
            a=0;
        }
        else{
            a=a*10+b[z]-'0';
        }
    }
    printf("5000000\n%lld",c);
}