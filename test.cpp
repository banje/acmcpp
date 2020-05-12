#include <stdio.h>
using namespace std;

int main() {
    int n, m, tc, a;
    char s[21];
    char t[21];
    char *u, *v, *tmp;
    u = s;
    v = t;
    scanf("%d", &tc);
    while(tc--){
        a = 0;
        scanf("%d", &m);
        while(m--){
            scanf("%d %s", &n, u);
            if(a < n){
                a = n;
                tmp = u;
                u = v;
                v = tmp;
            }
        }
        printf("%s", v);
    }
    return 0;

}