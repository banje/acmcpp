#include <stdio.h>
int main(){
    char a;
    int c[26]={0,},d=0,z;
    while(scanf("%1c",&a)!=-1){
        if(a>=90){
            c[a-97]=c[a-97]+1;
            if(c[a-97]>d){
                d=c[a-97];
            }
        }
    }
    for(z=0;z<26;z=z+1){
        if(c[z]==d){
            printf("%c",z+97);
        }
    }
}