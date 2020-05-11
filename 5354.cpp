#include <stdio.h>
int main(){
    int a,b,x,y,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b);
        if(b==1){
            printf("#\n\n");
        }
        else{
            for (y=0;y<b;y=y+1){
                printf("#");
            }
            for (y=0;y<b-2;y=y+1){
                printf("\n#");
                for (x=0;x<b-2;x=x+1){
                    printf("J");
                }
                printf("#");
            }
            printf("\n");
            for (y=0;y<b;y=y+1){
                printf("#");
            }
            printf("\n\n");
        }
    }
}