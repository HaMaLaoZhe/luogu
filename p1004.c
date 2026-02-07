#include <stdio.h>
#include <string.h>
int max(int a, int b) { return (a > b ? a : b); }
int main()
{
    int x, y, v, n, i, a[10][10] = {0};
    scanf("%d", &n);
    while (1)
    {
        scanf("%d", &x);
        if (x == 0) break;
        scanf("%d%d", &y, &v);
        a[x][y] = v;
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
int max(int a, int b) { return (a > b ? a : b); }
int main()
{
    int x, y, v, n, i, a[10][10] = {0};
    scanf("%d", &n);
    while (1)
    {
        scanf("%d", &x);
        if (x == 0) break;
        scanf("%d%d", &y, &v);
        a[x][y] = v;
    }
    
    return 0;
}
