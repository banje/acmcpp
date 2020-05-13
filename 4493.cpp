#include <stdio.h>
int main(){
    int a,b,e,f,y,z;
    char c,d;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b);
        e=0;
        f=0;
        for(y=0;y<b;y=y+1){
            scanf("%c",&c);
            scanf("%c %c",&c,&d);
            if(c==d){
            }
            else if(c=='R'){
                if(d=='S'){
                    e=e+1;
                }
                else{
                    f=f+1;
                }
            }
            else if(c=='S'){
                if(d=='P'){
                    e=e+1;
                }
                else{
                    f=f+1;
                }
            }
            else{
                if(d=='R'){
                    e=e+1;
                }
                else{
                    f=f+1;
                }
            }
        }
        if(e==f){
            printf("TIE\n");
        }
        else if(e>f){
            printf("Player 1\n");
        }
        else{
            printf("Player 2\n");
        }
    }
}