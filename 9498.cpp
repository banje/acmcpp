#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    char b;
    if (a>=90){
        b='A';
    }
    else if (a>=80){
        b='B';
    }
    else if (a>=70){
        b='C';
    }
    else if (a>=60){
        b='D';
    }
    else{
        b='F';
    }
    printf("%c",b);
    return 0;
}