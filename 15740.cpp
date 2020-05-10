#include <stdio.h>
void add(char x[],char y[]){
    char a[10014],b[10014],e[10014];
    int c=0,d=0,f,g=0,h,i,z=0;
    while(1){
        a[c]=x[c];
        if(a[c]==0){
            break;
        }
        c=c+1;
    }
    while(1){
        b[d]=y[d];
        if(b[d]==0){
            break;
        }
        d=d+1;
    }
    c=c-1;
    d=d-1;
    while(1){
        if(c<0){
            if(d<0){
                if(g==1){
                    e[z]=1;
                }
                else{
                    z=z-1;
                }
                break;
            }
            h=48;
        }
        else{
            h=a[c];
        }
        if(d<0){
            i=48;
        }
        else{
            i=b[d];
        }
        f=h+i+g-96;
        g=0;
        if(f>=10){
            g=1;
            f=f-10;
        }
        e[z]=f;
        c=c-1;
        d=d-1;
        z=z+1;
    }
    for(;z>=0;z=z-1){
        printf("%d",e[z]);
    }
}
void sub(char x[],char y[]){
    char a[10014],b[10014],e[10014];
    int c=0,d=0,f,g=0,h,i,z=0;
    while(1){
        a[c]=x[c];
        if(a[c]==0){
            break;
        }
        c=c+1;
    }
    while(1){
        b[d]=y[d];
        if(b[d]==0){
            break;
        }
        d=d+1;
    }
    c=c-1;
    d=d-1;
    while(1){
        if(c<0){
            if(d<0){
                while(1){
                    if(e[z]==0){
                        z=z-1;
                    }
                    else{
                        break;
                    }
                }
                break;
            }
            h=48;
        }
        else{
            h=a[c];
        }
        if(d<0){
            i=48;
        }
        else{
            i=b[d];
        }
        f=h-i-g;
        g=0;
        if(f<0){
            g=1;
            f=f+10;
        }
        e[z]=f;
        c=c-1;
        d=d-1;
        z=z+1;
    }
    for(;z>=0;z=z-1){
        printf("%d",e[z]);
    }
}
int main(){
    char a[10014],b[10014];
    int c=0,d=0,e=0,f=0,z;
    setvbuf(stdin,NULL,_IOFBF,30000);
    scanf("%s %s",a,b);
    while(1){
        if(a[d]==0){
            break;
        }
        d=d+1;
    }
    while(1){
        if(b[e]==0){
            break;
        }
        e=e+1;
    }
    if(a[0]=='-'){
        c=1;
        for(z=0;z<d;z=z+1){
            a[z]=a[z+1];
        }
        d=d-1;
    }
    if(b[0]=='-'){
        f=1;
        for(z=0;z<e;z=z+1){
            b[z]=b[z+1];
        }
        e=e-1;
    }
    if(c+f==0){
        add(a,b);
        return 0;
    }
    else if(c+f==2){
        printf("-");
        add(a,b);
        return 0;
    }
    else{
        if(d>e){
            if(c==1){
                printf("-");
            }
            sub(a,b);
        }
        else if(d<e){
            if(f==1){
                printf("-");
            }
            sub(b,a);
        }
        else{
            for(z=0;z<d;z=z+1){
                if(a[z]>b[z]){
                    if(c==1){
                        printf("-");
                    }
                    sub(a,b);
                    return 0;
                }
                else if(a[z]<b[z]){
                    if(f==1){
                        printf("-");
                    }
                    sub(b,a);
                    return 0;
                }
            }
            printf("0");
            return 0;
        }
    }
}