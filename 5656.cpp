#include <stdio.h>
int main(){
    int a,b,d=1;
    char c[3];
    while(1){
        scanf("%d %s %d",&a,c,&b);
        switch(c[0]){
            case '>':
                if(a>b){
                    printf("Case %d: true\n",d);
                }
                else{
                    if(c[1]=='='&&a==b){
                        printf("Case %d: true\n",d);
                    }
                    else{
                        printf("Case %d: false\n",d);
                    }
                }
                break;
            case '<':
                if(a<b){
                    printf("Case %d: true\n",d);
                }
                else{
                    if(c[1]=='='&&a==b){
                        printf("Case %d: true\n",d);
                    }
                    else{
                        printf("Case %d: false\n",d);
                    }
                }
                break;
            case '=':
                if(a==b){
                    printf("Case %d: true\n",d);
                }
                else{
                    printf("Case %d: false\n",d);
                }
                break;
            case '!':
                if(a==b){
                    printf("Case %d: false\n",d);
                }
                else{
                    printf("Case %d: true\n",d);
                }
                break;
            case 'E':
                return 0;
        }
        d=d+1;
    }
}