#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    if (a+b+c!=180){
        printf("Error");
    }
    else if ((a==b)||(a==c)||(b==c)){
        if ((a==b)&&(a==c)&&(b==c)){
            printf("Equilateral");
        }
        else{
            printf("Isosceles");
        }
    }
    else{
        printf("Scalene");
    }
}