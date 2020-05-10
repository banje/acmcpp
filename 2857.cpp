#include <stdio.h>
int main(){
    int b=0,z,y;
    char a[10];
    for(z=0;z<5;z=z+1){
        for(y=0;y<10;y=y+1){
            a[y]='a';
        }
        scanf("%s",a);
        for(y=0;y<8;y=y+1){
            if(a[y]=='F'){
                if(a[y+1]=='B'){
                    if(a[y+2]=='I'){
                        printf("%d ",z+1);
                        b=1;
                        break;
                    }
                }
            }
        }
    }
    if(b==0){
        printf("HE GOT AWAY!");
    }
}