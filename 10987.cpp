#include <stdio.h>
#include <string.h>
int main(){
    char a[101];
    scanf("%s",a);
    int d=0;
    for (int b=strlen(a)-1;b>=0;b=b-1){
        char c=a[b];
        if ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u')){
            d=d+1;
        }
    }
    printf("%d",d);
}