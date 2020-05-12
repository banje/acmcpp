#include <stdio.h>
int main(){
    int a,z;
    char b[31];
    scanf("%d\n",&a);
    for(z=0;z<a;z=z+1){
        scanf(" %[^\n]s",b);
        if(b[0]>'Z'){
            b[0]=b[0]-32;
        }
        printf("%s\n",b);
    }
}