#include <stdio.h>
char b[81];
int d(int a,int c){
    int z;
    if(2*c>a){
        printf("ERROR");
        return 0;
    }
    for(z=1;z<=c;z=z+1){
        if(b[a-z]!=b[a-c-z]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a,c=1,e,z;
    for(z=0;z<81;z=z+1){
        b[z]='1';
    }
    scanf("%d",&a);
    while(a>=c){
        e=0;
        for(z=1;2*z<=c;z=z+1){
            if(d(c,z)==1){
                e=1;
                break;
            }
        }
        if(e==0){
            c=c+1;
        }
        else{
            while(1){
                b[c-1]=b[c-1]+1;
                if(b[c-1]!='4'){
                    break;
                }
                b[c-1]='1';
                c=c-1;
            }
        }
    }
    b[c-1]='\0';
    printf("%s",b);
}