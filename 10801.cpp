#include <stdio.h>
int main(){
    int a[10],b[10],c=0,d=0,z;
    for(z=0;z<10;z=z+1){
        scanf("%d",&a[z]);
    }
    for(z=0;z<10;z=z+1){
        scanf("%d",&b[z]);
    }
    for(z=0;z<10;z=z+1){
        if(a[z]>b[z]){
            c=c+1;
        }
        else if(a[z]<b[z]){
            d=d+1;
        }
    }
    if(c>d){
        printf("A");
    }
    else if(c<d){
        printf("B");
    }
    else{
        printf("D");
    }
}