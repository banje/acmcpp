#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,*b,c=0,e,f=0,z;
    char d[6];
    scanf("%d",&a);
    b=(int*)malloc(4*a+4);
    for(z=0;z<a;z=z+1){
        scanf("%s",d);
        switch(d[0]){
            case 'p':
                if (d[1]=='u'){
                    scanf("%d",&e);
                    b[f]=e;
                    f=f+1;
                }
                else{
                    if (c==f){
                        printf("-1\n");
                    }
                    else{
                        printf("%d\n",b[c]);
                        c=c+1;
                    }
                }
                break;
            case 's':
                printf("%d\n",f-c);
                break;
            case 'e':
                if(c==f){
                    printf("1\n");
                }
                else{
                    printf("0\n");
                }
                break;
            case 'f':
                if(c==f){
                    printf("-1\n");
                }
                else{
                    printf("%d\n",b[c]);
                }
                break;
            default:
                if(c==f){
                    printf("-1\n");
                }
                else{
                    printf("%d\n",b[f-1]);
                }
        }
    }
}