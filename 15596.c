#include <stdio.h>
long long sum(int *a, int n){
    long long b=0;
    int z;
    for(z=0;z<n;z=z+1){
        b=b+a[z];
    }
    return b;
}