#include <stdio.h>
int main(){
    int a[20001]={0},b,c,d,e=1,f=1,z;
    scanf("%d",&b);
    scanf("%d",&c);
    d=c+10000;
    a[c+10000]=1;
    printf("%d\n",c);
    for(z=b-1;z!=0;z=z-1){
        scanf("%d",&c);
        a[c+10000]=a[c+10000]+1;
        if(c+10000>d){
            if(e==0){
                if(f<a[d]){
                    f=f+1;
                }
                else{
                    while(1){
                        d=d+1;
                        if(a[d]!=0){
                            f=1;
                            break;
                        }
                    }
                }
            }
        }
        else if(c+10000<d){
            if(e==1){
                if(f!=1){
                    f=f-1;
                }
                else{
                    while(1){
                        d=d-1;
                        if(a[d]!=0){
                            f=a[d];
                            break;
                        }
                    }
                }
            }
        }
        else{
            if(e^1){
                f=f+1;
            }
        }
        printf("%d\n",d-10000);
        e=!e;
    }
}