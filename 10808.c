#include <stdio.h>
int main(){
    int b[26]={0,},c=0,z;
    char a[101]={0,};
    scanf("%s",a);
    while(1){
        if(a[c]==0){
            break;
        }
        b[a[c]-97]=b[a[c]-97]+1;
        c=c+1;
    }
    for(z=0;z<26;z=z+1){
        printf("%d ",b[z]);
    }
}