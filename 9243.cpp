#include <stdio.h>
int main(){
    int a,d=0;
    char b[1001],c[1001];
    scanf("%d",&a);
    a=a%2;
    scanf("%s\n%s",b,c);
    switch(a){
        case 0:
            while(1){
                if(b[d]==0){
                    printf("Deletion succeeded");
                    break;
                }
                if(b[d]!=c[d]){
                    printf("Deletion failed");
                    break;
                }
                d=d+1;
            }
            break;
        case 1:
            while(1){
                if(b[d]==0){
                    printf("Deletion succeeded");
                    break;
                }
                if(b[d]==c[d]){
                    printf("Deletion failed");
                    break;
                }
                d=d+1;
            }
    }
}