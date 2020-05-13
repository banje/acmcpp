#include <stdio.h>
int main(){
    char a[101],c;
    int b;
    scanf("%[^\n]s",a);
    b=0;
    while(1){
        if(65<=a[b]&&a[b]<=122){
            c=a[b]-13;
            if(c<=64||84<=c&&c<=96){
                c=c+26;
            }
            printf("%c",c);
        }
        else if(a[b]=='\0'){
            break;
        }
        else{
            printf("%c",a[b]);
        }
        b=b+1;
    }
}