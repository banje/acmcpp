#include <stdio.h>
int main(){
    int a,z;
    double b;
    scanf("%d",&a);
    for(z=0;z<a;z=z+1){
        scanf("%lf",&b);
        printf("$%.2lf\n",b*0.8);
    }
}