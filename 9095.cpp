#include <stdio.h>
int a(int b){
    switch(b){
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 4;
        default:
            int c;
            c=a(b-1)+a(b-2)+a(b-3);
            return c;
    }
};
int main(){
    int b;
    scanf("%d",&b);
    int c;
    for(1;b>0;b=b-1){
        scanf("%d",&c);
        printf("%d\n",a(c));
    }
}