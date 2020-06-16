#include <stdio.h>
int main(){
    char a[]="LZW IMAUC TJGOF XGP BMEHK GNWJ LZW DSRQ VGY GX USWKSJ SFV QGMJ MFAIMW KGDMLAGF AK ZZKFWKVUFUFK\0",c;
    int b,z=0;
    scanf("%d",&b);
    for(;;z=z+1){
        c=a[z];
        if(c==0){
            printf("\n");
            scanf("%d",&b);
            z=-1;
            continue;
        }
        else if(c!=' '){
            c=c+b;
            if(c>'Z'){
                c=c-26;
            }
        }
        printf("%c",c);
    }
}