#include <stdio.h>
int main(){
    int a,b,c,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d %d",&b,&c);
        printf("%d %d\n",2*c-b,b-c);
    }
}