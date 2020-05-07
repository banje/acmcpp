#include <stdio.h>
int main(){
    int a[9],b=0,c,x,y,z;
    for(z=0;z<9;z=z+1){
        scanf("%d",&a[z]);
        b=b+a[z];
    }
    for(z=0;z<9;z=z+1){
        for(y=z+1;y<9;y=y+1){
            if(a[z]>a[y]){
                c=a[z];
                a[z]=a[y];
                a[y]=c;
            }
        }
    }
    for(z=0;z<9;z=z+1){
        for(y=z+1;y<9;y=y+1){
            if(b-a[z]-a[y]==100){
                for(x=0;x<9;x=x+1){
                    if(x!=z&x!=y){
                        printf("%d\n",a[x]);
                    }
                }
                return 0;
            }
        }
    }
}