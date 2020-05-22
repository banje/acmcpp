#include <stdio.h>
int b[1001];
int a(int c){
    if(b[c]==c){
        return c;
    }
    b[c]=a(b[c]);
    return a(b[c]);
}
int d(int c,int e){
    int f;
    f=a(c);
    if(f==a(e)){
        return 0;
    }
    b[a(e)]=f;
    return -1;
}
int main(){
    int c,e,f,g,z;
    scanf("%d %d",&c,&e);
    for(z=1;z<=c;z=z+1){
        b[z]=z;
    }
    for(z=0;z<e;z=z+1){
        scanf("%d %d",&f,&g);
        c=c+d(f,g);
    }
    printf("%d",c);
}