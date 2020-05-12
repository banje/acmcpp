#include <stdio.h>
int main(){
    int a,b=0,c=100,z;
    for(z=0;z<7;z=z+1){
        scanf("%d",&a);
        if(a%2!=0){
            b=b+a;
            if(a<c){
                c=a;
            }
        }
    }
    if(b==0){
        printf("-1");
    }
    else{
        printf("%d\n%d",b,c);
    }
}