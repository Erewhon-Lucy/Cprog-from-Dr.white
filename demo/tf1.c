#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i < 20; ++i)
    {
        printf("%d\n", i);
        i += 3;
    }

    return 0;
}