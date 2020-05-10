#include <stdio.h>
#include <stdlib.h>
int test(int h){
    int a=h,*b,*c,*d,e=1,f=0,g=0,z;
    if(a==1){
        return 0;
    }
    b=(int *)calloc(1000001,4);
    c=(int *)malloc(1000001*4);
    d=(int *)malloc(1000001*4);
    c[0]=a;
    while(1){
        g=g+1;
        for (z=0;z<e;z=z+1){
            if (c[z]%3==0){
                if(b[c[z]/3]==0){
                    d[f]=c[z]/3;
                    b[d[f]]=1;
                    if (d[f]==1){
                        free(b);
                        free(c);
                        free(d);
                        return g;
                    }
                    f=f+1;
                }
            }
            if (c[z]%2==0){
                if(b[c[z]/2]==0){
                    d[f]=c[z]/2;
                    b[d[f]]=1;
                    if (d[f]==1){
                        free(b);
                        free(c);
                        free(d);
                        return g;
                    }
                    f=f+1;
                }
            }
            if(b[c[z]-1]==0){
                d[f]=c[z]-1;
                b[d[f]]=1;
                if (d[f]==1){
                    free(b);
                    free(c);
                    free(d);
                    return g;
                }
                f=f+1;
            }
        }
        for (z=0;z<=f;z=z+1){
            c[z]=d[z];
        }
        e=f;
        f=0;
    }
}
int main(){
    int a,b=0,c;
    for(a=1;a<1000001;a=a+1){
        c=test(a);
        if(c>b){
            b=c;
        }
    }
    printf("%d",b);
}