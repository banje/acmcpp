#include <stdio.h>
int main(){
    int a,y,z;
    char b[21]={0,};
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%s",b);
        for(y=0;y<21;y=y+1){
            if(b[y]<=90&&b[y]!=0){
                b[y]=b[y]+32;
            }
        }
        printf("%s\n",b);
    }
}