#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,*b,c=0,e,z;
    char d[6];
    scanf("%d",&a);
    b=(int*)malloc(4*a+4);
    for(z=0;z<a;z=z+1){
        scanf("%s",d);
        switch(d[0]){
            case 'p':
                if (d[1]=='u'){
                    scanf("%d",&e);
                    b[c]=e;
                    c=c+1;
                }
                else{
                    if (c==0){
                        printf("-1\n");
                    }
                    else{
                        printf("%d\n",b[c-1]);
                        c=c-1;
                    }
                }
                break;
            case 's':
                printf("%d\n",c);
                break;
            case 'e':
                if(c==0){
                    printf("1\n");
                }
                else{
                    printf("0\n");
                }
                break;
            case 't':
                if(c==0){
                    printf("-1\n");
                }
                else{
                    printf("%d\n",b[c-1]);
                }
                break;
        }
    }
}