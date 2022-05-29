#include <stdio.h>
//int main()
//{
//    int arr[] = {1, 2, 3, 4,};
//    short a = 1;
//    printf("%d\n", sizeof (short));
//    //printf("%d\n", sizeof long); 报错，因为sizeof long 必须加括号
//    printf("%d\n", sizeof a);
//    printf("%d\n", sizeof (a));
//    printf("%d\n", sizeof (arr) / sizeof (arr[0]));
//}
//int Max(int a, int b)
//{
//    if( a >b)
//        return a;
//    else
//        return b;
//}
//int main() {
//    int a = 1;
//    int b = 2;
//    int c = Max(a, b);
//    printf("max = %d\n", c);
//    return 0;
//}
//int main()
//{
//    int a = 0; // 00000000 0000000 0000000 00000000
//    int b = ~a;// 11111111 11111111 11111111 11111111 b是有符号位的整型，
//    //因为b有符号位，且最高位为1，最高位为1表示这个数为负数。最高位为0表示这个数为整数
//    //所以b是一个负数。又因为负数在内存中存储时存储的是二进制的补码，但是我们打印打印的是原码
//    //所以计算b的原码。先减一变为反码。11111111 11111111 11111111 11111110
//    //计算原码                     10000000 00000000 00000000 00000001
//    printf("%d\n", b);
//    return 0;
//}
//int main()
//{
//    int a = 10;
//    int b = a++;
//    printf("a = %d\nb = %d\n ", a , b);
//
//}
//int main()
//{
//    int a = (int) 3.14;
//
//}
//int main ()
//{
//    int a = 3;
//    int b = 0;
//    int c = a&&b;
//    int d = a||b++;
//    int e = !a;
//    int f = !b;
//    printf("c = %d\nd = %d\ne = %d\nf = %d\nb = %d\n", c, d, e, f, b);
//}
//int main ()
//{
//    typedef unsigned int u_int;
//    unsigned int num1 = 10;
//    u_int num2 = 20;
//    return 0;
//
//}
//void test ()
//{
//    static int a = 1;
//    a++;
//    printf("a = %d\n", a);
//}
//int main()
//{
//    extern int g_val;
//    printf("%d\n", g_val);
//    int i = 0;
//    while ( i < 5)
//    {
//        test();
//        i++;
//    }
//
//}
//extern int Add(int , int);
//int main ()
//{
//    int a = 10;
//    int b = 20;
//    int sum = Add(a, b);
//    printf("%d\n", sum);
//    return 0;
//}
//#define MAX 100
//int main ()
//{
//    printf("%d\n", MAX);
//    return 0;
//
//}
//#define MAX(X, Y) (X>Y?X:Y)
//int Max(int x , int y)
//{
//    return x>y ? x: y;
//}
//int main ()
//{
//    int a = 1;
//    int b = 2;
//    int c1 = Max(a,b);
//    int c2 = MAX(a,b);
//    printf("%d\n", c1);
//    printf("%d\n", c2);
//}
//int main ()
//{
//    int a= 10;
//    int * p = &a;
//    printf("%p\n", &a);
//    printf("%p\n", p);
//    *p = 20;
//    printf("%d\n", a);
//    printf("%p\n", &a);
//
//
//    return 0;
//}
//int main ()
//{
//    char ch = 'A';
//    printf("%c\n", ch);
//    char *p = &ch;
//    *p = 'B';
//    printf("%c\n", ch);
//    printf("%d\n", sizeof (int*));
//    printf("%d\n", sizeof(char*));
//
//}