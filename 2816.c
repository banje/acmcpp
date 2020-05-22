#include <stdio.h>
int main(){
    int a,c,d,z;
    char b[11]={0};
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%s",b);
        if((b[0]=='K')&&(b[1]=='B')&&(b[2]=='S')){
            if((b[3]=='1')&&(b[4]==0)){
                c=z;
            }
            else if((b[3]=='2')&&(b[4]==0)){
                d=z;
            }
        }
    }
    if(c>d){
        d=d+1;
    }
    for(z=0;z<c;z=z+1){
        printf("1");
    }
    for(z=0;z<c;z=z+1){
        printf("4");
    }
    for(z=0;z<d;z=z+1){
        printf("1");
    }
    for(z=1;z<d;z=z+1){
        printf("4");
    }
}