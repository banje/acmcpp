#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int d;
    for (int c=0;c<a;c=c+1){
        scanf("%d",&d);
        if (d<b){
            printf("%d ",d);
        }
    }
}