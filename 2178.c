#include <stdio.h>
int main(){
    int a,b,c[102][102]={0},d[10000][2],e=1,f=0,y,z;
    scanf("%d %d",&a,&b);
    getchar();
    for(z=1;z<a+1;z=z+1){
        for(y=1;y<b+1;y=y+1){
           c[z][y]=getchar()-'0';
        }
        getchar();
    }
    d[0][0]=1;
    d[0][1]=1;
    while(1){
        if((d[f][0]==a)&&(d[f][1]==b)){
            printf("%d",c[d[f][0]][d[f][1]]);
            break;
        }
        if(c[d[f][0]-1][d[f][1]]==1){
            d[e][0]=d[f][0]-1;
            d[e][1]=d[f][1];
            c[d[f][0]-1][d[f][1]]=c[d[f][0]][d[f][1]]+1;
            e=e+1;
        }
        if(c[d[f][0]+1][d[f][1]]==1){
            d[e][0]=d[f][0]+1;
            d[e][1]=d[f][1];
            c[d[f][0]+1][d[f][1]]=c[d[f][0]][d[f][1]]+1;
            e=e+1;
        }
        if(c[d[f][0]][d[f][1]-1]==1){
            d[e][0]=d[f][0];
            d[e][1]=d[f][1]-1;
            c[d[f][0]][d[f][1]-1]=c[d[f][0]][d[f][1]]+1;
            e=e+1;
        }
        if(c[d[f][0]][d[f][1]+1]==1){
            d[e][0]=d[f][0];
            d[e][1]=d[f][1]+1;
            c[d[f][0]][d[f][1]+1]=c[d[f][0]][d[f][1]]+1;
            e=e+1;
        }
        f=f+1;
    }
}