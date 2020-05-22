#include <stdio.h>
int main(){
    int a,b,c=0,d[]={2,3,5,7,11},e,f,g,z;
    scanf("%d",&a);
    if(a>98689){
        printf("1003001");
        return 0;
    }
    else if(a<12){
        for(z=0;z<5;z=z+1){
            if(d[z]>=a){
                printf("%d",d[z]);
                return 0;
            }
        }
    }
    else if(a<930){
        b=1;
        while(1){
            e=b*101+c*10;
            if(e>=a){
                g=0;
                for(z=3;z<34;z=z+1){
                    if(e%z==0){
                        g=1;
                        break;
                    }
                }
                if(g==0){
                    printf("%d",e);
                    return 0;
                }
            }
            c=c+1;
            if(c==10){
                c=0;
                b=b+2;
                if(b>10){
                    break;
                }
            }
        }
    }
    b=10;
    f=1;
    while(1){
        e=b*1000+c*100+f;
        if(e>=a){
            g=0;
            for(z=3;z<317;z=z+1){
                if(e%z==0){
                    g=1;
                    break;
                }
            }
            if(g==0){
                printf("%d",e);
                return 0;
            }
        }
        c=c+1;
        if(c==10){
            c=0;
            b=b+1;
            f=f+10;
            if(f>100){
                f=f-98;
                b=b+10;
            }
        }
    }
}