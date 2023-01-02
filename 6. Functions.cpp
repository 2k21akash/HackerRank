#include <stdio.h>

void great(int p, int q, int r, int s)
{
    if (p > q && p > r && p > s)
    {
        printf("%d", p);
    }
    else if (q > p && q > r && q > s)
    {
        printf("%d", q);
    }
    else if (r > p && r > q && r > s)
    {
        printf("%d", r);
    }
    else
    {
        printf("%d", s);
    }
}

int main()
{
    int a, b, c, d;

    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    great(a, b, c, d);
    return 0;
}
