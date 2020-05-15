#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,c,d,z;
    char b[4];
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf(" %[^=+]s",b);
        if(b[0]=='P'){
            scanf("%s",b);
            printf("skipped\n");
        }
        else{
            c=atoi(b);
            scanf("+%d",&d);
            printf("%d\n",c+d);
        }
    }
}