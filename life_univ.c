#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    while ((x != 42) && (x>=0 && x<100))
    {
        printf("%d\n", x);
        scanf("%d", &x);
    }
    return 0;
}