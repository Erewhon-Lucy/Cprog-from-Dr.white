#include <stdio.h>

int main()//插入
{
    int a[128] = {1,2,3,4,5,6};
    int N = 6;
    int pos = 2;//在第二个位置插入
    int i, key = 7;

    //a[pos - 1] = key;//这样子就把数冲掉了
    //因此我们要从尾巴把数组往后移
    for (i = N; i >= pos; --i)
    {
        a[i] = a[i - 1];
    }

    a[pos-1] = key;
    //或a[i]=key;
    ++N;//为了逻辑的完整

    return 0;
}