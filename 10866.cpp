#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,*b,c,e,f,z;
    char d[11];
    scanf("%d",&a);
    b=(int*)malloc(8*a+4);
    c=a/2;
    f=c;
    for(z=0;z<a;z=z+1){
        scanf("%s",d);
        switch(d[0]){
            case 'p':
                if (d[1]=='u'){
                    scanf("%d",&e);
                    if(d[5]=='f'){
                        c=c-1;
                        b[c]=e;
                    }
                    else{
                        b[f]=e;
                        f=f+1;
                    }
                }
                else{
                    if (c==f){
                        printf("-1\n");
                    }
                    else{
                        if (d[4]=='f'){
                            printf("%d\n",b[c]);
                            c=c+1;
                        }else{
                            f=f-1;
                            printf("%d\n",b[f]);
                        }
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