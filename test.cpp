#include <stdio.h>
int main() {
    int a,b,c,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d %d",&b,&c);
        if(b==1){
            printf("0\n");
        }
        else if(b==2){
            printf("%d\n",c);
        }
        else{
            printf("%d\n",2*c);
        }
    }
}