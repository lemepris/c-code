#include <stdio.h>
int a  = 1;

int main()
{
    extern int g_val;
    printf("g_val = %d\n", g_val);
    short age = 31;
    //计算两个数的和
    printf("age = %d\n", age);
    return 0;
}
