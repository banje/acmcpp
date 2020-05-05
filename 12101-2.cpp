#include <stdio.h>
int main(){
    int a,b,g,h,i,j;
    scanf("%d %d",&a,&b);
    int c[280]={0,};
    int d[280]={0,};
    int e[280]={0,};
    int f[280]={0,};
    c[0]=1;
    d[0]=11;
    d[1]=2;
    e[0]=111;
    e[1]=21;
    e[2]=12;
    e[3]=3;
    switch (a){
        case 1:
            f[0]=1;
            break;
        case 2:
            f[0]=11;
            f[1]=2;
            break;
        case 3:
            f[0]=111;
            f[1]=21;
            f[2]=12;
            f[3]=3;
            break;
        default:
            for (g=3;g<a;g=g+1){
                h=0;
                for(i=0;i<280;i=i+1){
                    f[i]=0;
                }
                i=0;
                while(e[i]!=0){
                    f[h]=e[i]*10+1;
                    h=h+1;
                    i=i+1;
                }
                i=0;
                while(d[i]!=0){
                    f[h]=d[i]*10+2;
                    h=h+1;
                    i=i+1;
                }
                i=0;
                while(c[i]!=0){
                    f[h]=c[i]*10+3;
                    h=h+1;
                    i=i+1;
                }
                i=0;
                while(d[i]!=0){
                    c[i]=d[i];
                    i=i+1;
                }
                i=0;
                while(e[i]!=0){
                    d[i]=e[i];
                    i=i+1;
                }
                i=0;
                while(f[i]!=0){
                    e[i]=f[i];
                    i=i+1;
                }
            }
    }
    if(b>275){
        printf("-1");
    }
    else if(f[b-1]==0){
        printf("-1");
    }
    else{
        j=f[b-1];
        while (1){
            printf("%d",j%10);
            j=j/10;
            if(j==0){
                break;
            }
            printf("+");
        }
    }
    return 0;
}