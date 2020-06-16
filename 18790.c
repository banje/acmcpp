#include <stdio.h>
#include <stdlib.h>
int e;
struct C{
    int a,b;
};
int B(const void *a,const void *b){
    int c=*(int *)a, d=*(int *)b;
    if((c%e)>(d%e)){
        return 1;
    }
    else if((c%e)<(d%e)){
        return -1;
    }
    else{
        return 0;
    }
}
int A(int a,int b[]){
    int *c,*d,*f,*g,z;
    c=(int*)malloc(sizeof(int)*(2*a-1));
    d=(int*)malloc(sizeof(int)*a);
    f=(int*)malloc(sizeof(int)*a);
    for(z=0;z<2*a-1;z=z+1){
        c[z]=b[z];
    }
    e=a;
    qsort(c,2*a-1,sizeof(int),B);
    if((c[0]%a)==(c[a-1]%a)){
        //0부터 a-1까지 a개가 같다는 뜻
        //0부터 a-1까지 내보내기
    }
    d[0]=c[0];
    f[0]=c[0];
    for(z=1;z<a;z=z+1){
        if((c[z]%a)==(c[z+a-1]%a)){
            //z부터 z+a-1까지 총 a개가 같다는 뜻
            //z부터 z+a-1까지 내보내기
        }
        else{
            d[z]=c[z];
            f[z]=c[z+a-1];
        }
    }
    g=(int*)malloc(sizeof(int)*a);

}
int main(){
}