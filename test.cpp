#include <stdio.h>
using namespace std;

int main() {
    char f[11];
    int j, l, a = 0;
    for (int i=1;i<=5;i++)
    {
        scanf("%s", f);
        l=0;
        for (j=0;j<=10;j++)
        {
            if (f[j] == 0||f[j] == 10){l = j; break;}
        }
        printf("l = %d;\n", l);
        for (j = 0; j < l - 2; j++)
        {
            if (f[j] == 'F' && f[j+1] == 'B' && f[j+2] == 'I'){a=1; printf("%d ", i); break;}
        }
    }
    if (a == 0){printf("HE GOT AWAY!");}
    return 0;
}