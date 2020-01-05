#include <stdio.h>

void decomp(double x, int *i, double *f)
{
    *i = (int)x;
    *f = x - *i;
}

int main()//插入
{
    double a = 3.14159;
    int i;
    double f;

    decomp(a, &i, &f);

    return  0;
}