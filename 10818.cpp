#include <stdio.h>
int main(){
    int a,b=-1000001,c=1000001,d,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&d);
        if(d>b){
            b=d;
        }
        if(d<c){
            c=d;
        }
    }
    printf("%d %d",c,b);
}