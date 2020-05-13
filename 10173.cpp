#include <stdio.h>
int main(){
    char a[81];
    int b,c,z;
    while(1){
        scanf(" %[^\n]s",a);
        if(a[0]=='E'&&a[1]=='O'&&a[2]=='I'&&a[3]==0){
            break;
        }
        b=0;
        while(1){
            if(a[b]==0){
                break;
            }
            b=b+1;
        }
        c=0;
        for(z=0;z<b-3;z=z+1){
            if(((a[z]=='N')||(a[z]=='n'))&&((a[z+1]=='E')||(a[z+1]=='e'))&&((a[z+2]=='M')||(a[z+2]=='m'))&&((a[z+3]=='O')||(a[z+3]=='o'))){
                printf("Found\n");
                c=1;
                break;
            }
        }
        if(c==0){
            printf("Missing\n");
        }
    }
}