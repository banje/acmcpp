#include <stdio.h>
int c[1002][1002],e[1000000][2];
int main(){
    int a,b,d,f=0,g=0,h=0,y,z;
    scanf("%d %d",&a,&b);
    for(z=0;z<a+2;z=z+1){
        c[0][z]=-1;
        c[b+1][z]=-1;
    }
    for(z=1;z<b+1;z=z+1){
        c[z][0]=-1;
        c[z][a+1]=-1;
    }
    for(z=1;z<b+1;z=z+1){
        for(y=1;y<a+1;y=y+1){
            scanf("%d",&d);
            if(d==1){
                e[f][0]=z;
                e[f][1]=y;
                f=f+1;
                h=h+1;
            }
            if(d==-1){
                h=h+1;
            }
            c[z][y]=d;
        }
    }
    while(1){
        if(g==f){
            break;
        }
        if(c[e[g][0]-1][e[g][1]]==0){
            e[f][0]=e[g][0]-1;
            e[f][1]=e[g][1];
            c[e[g][0]-1][e[g][1]]=c[e[g][0]][e[g][1]]+1;
            f=f+1;
            h=h+1;
        }
        if(c[e[g][0]+1][e[g][1]]==0){
            e[f][0]=e[g][0]+1;
            e[f][1]=e[g][1];
            c[e[g][0]+1][e[g][1]]=c[e[g][0]][e[g][1]]+1;
            f=f+1;
            h=h+1;
        }
        if(c[e[g][0]][e[g][1]-1]==0){
            e[f][0]=e[g][0];
            e[f][1]=e[g][1]-1;
            c[e[g][0]][e[g][1]-1]=c[e[g][0]][e[g][1]]+1;
            f=f+1;
            h=h+1;
        }
        if(c[e[g][0]][e[g][1]+1]==0){
            e[f][0]=e[g][0];
            e[f][1]=e[g][1]+1;
            c[e[g][0]][e[g][1]+1]=c[e[g][0]][e[g][1]]+1;
            f=f+1;
            h=h+1;
        }
        g=g+1;
    }
    if(g==0){
        printf("0");
    }
    else if(h==a*b){
        printf("%d",c[e[g-1][0]][e[g-1][1]]-1);
    }
    else{
        printf("-1");
    }
}