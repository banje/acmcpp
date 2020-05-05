#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g,y,z;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%d",&b);
        switch(b){
            case 1:
                printf("1\n");
                break;
            case 2:
                printf("2\n");
                break;
            case 3:
                printf("2\n");
                break;
            case 4:
            case 5:
                printf("3\n");
                break;
            default:
                c=1;d=2;e=4;f=4;
                for(y=3;y<b/2;y=y+1){
                    f=c+d;
                    if (f>=1000000009){
                        f=f-1000000009;
                    }
                    f=f+e;
                    if (f>=1000000009){
                        f=f-1000000009;
                    }
                    c=d;
                    d=e;
                    e=f;
                }
                g=f+d;
                if (g>=1000000009){
                    g=g-1000000009;
                }
                printf("%d\n",g);
        }
    }
}