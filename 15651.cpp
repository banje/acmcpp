#include <stdio.h>
void c(int a,int b,char*h){
    int g,j=0,z;
    char i[8];
    g=b;
    while(1){
        if(h[j]==0){
            break;
        }
        i[j]=h[j];
        j=j+1;
    }
    if(g==0){
        for(z=0;z<j;z=z+1){
            printf("%c ",i[z]);
        }
        printf("\n");
    }
    else{
        for(z=1;z<=a;z=z+1){
            i[j]=z+48;
            i[j+1]=0;
            c(a,g-1,i);
        }
    }
}
int main(){
    int a,b;
    char e[8]={0,};
    scanf("%d %d",&a,&b);
    c(a,b,e);
}