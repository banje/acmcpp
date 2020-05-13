#include <stdio.h>
int main(){
    int a,z;
    char b[50];
    scanf("%d",&a);
    for(z=1;z<=a;z=z+1){
        scanf("%c",b);
        scanf("%[^\n]s",b);
        printf("%d. %s\n",z,b);
    }
}