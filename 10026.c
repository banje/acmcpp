#include <stdio.h>
int d[105][105],e[105][105];
void ir(int a,int b){
    if(d[a][b]=='R'){
        d[a][b]=1;
        ir(a-1,b);
        ir(a+1,b);
        ir(a,b-1);
        ir(a,b+1);
    }
}
void ig(int a,int b){
    if(d[a][b]=='G'){
        d[a][b]=1;
        ig(a-1,b);
        ig(a+1,b);
        ig(a,b-1);
        ig(a,b+1);
    }
}
void ib(int a,int b){
    if(d[a][b]=='B'){
        d[a][b]=1;
        ib(a-1,b);
        ib(a+1,b);
        ib(a,b-1);
        ib(a,b+1);
    }
}
void ir2(int a,int b){
    if(e[a][b]=='R'){
        e[a][b]=1;
        ir2(a-1,b);
        ir2(a+1,b);
        ir2(a,b-1);
        ir2(a,b+1);
    }
}
void ib2(int a,int b){
    if(e[a][b]=='B'){
        e[a][b]=1;
        ib2(a-1,b);
        ib2(a+1,b);
        ib2(a,b-1);
        ib2(a,b+1);
    }
}
int main(){
    int a,b=0,f=0,y,z;
    char c;
    scanf("%d",&a);
    for(z=0;z<a+2;z=z+1){
        d[0][z]=1;
        d[a+1][z]=1;
        e[0][z]=1;
        e[a+1][z]=1;
    }
    for(z=1;z<a+1;z=z+1){
        d[z][0]=1;
        d[z][a+1]=1;
        e[z][0]=1;
        e[z][a+1]=1;
    }

    getchar();
    for(z=1;z<a+1;z=z+1){
        for(y=1;y<a+1;y=y+1){
            c=getchar();
            d[z][y]=c;
            if(c=='G'){
                e[z][y]='R';
            }
            else{
                e[z][y]=c;
            }
        }
        getchar();
    }
    for(z=1;z<a+1;z=z+1){
        for(y=1;y<a+1;y=y+1){
            if(d[z][y]=='R'){
                ir(z,y);
                b=b+1;
            }
            else if(d[z][y]=='G'){
                ig(z,y);
                b=b+1;
            }
            else if(d[z][y]=='B'){
                ib(z,y);
                b=b+1;
            }
            if(e[z][y]=='R'){
                ir2(z,y);
                f=f+1;
            }
            else if(e[z][y]=='B'){
                ib2(z,y);
                f=f+1;
            }
        }
    }
    printf("%d %d",b,f);
}