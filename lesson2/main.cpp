#include <stdio.h>
#include <string.h>
#define  MAX 10
enum Sex {
    MALE,
    FEMALE,
    SECRET,
};
enum Color
{
    RED,
    BLUE,
    GREEN,
};
int Add(int x , int y)
{
    int z = x + y;
    return z ;
}
int main()
{
    int a = 3; // 0011
    int b = 5; // 0101
    int c = a&b;//0001
    int d = a|b;//0111
    int e = a^b;//0110
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
}
//int main()
//{
//    int a = 1;
//    int b = a<<2;
//    printf("%d\n", b);
//}
//int main()
//{
//    int a = 5/2;
//    printf("%d\n", a);
//    int b = 5%2;
//    printf("%d\n", b);
//}
//int main ()
//{
//    int a = 1;
//    int b  = 2;
//    int c = 3;
//    int arr[10] = {1, 2, 3, 4, 5, 6, 7,8, 9 , 10};
//    char ch[20];
//    float ar[5];
//    printf("%d\n", arr[1]);
//    int i = 0;
//    while(i < 10)
//    {
//        printf("%d\n", arr[i]);
//        i++;
//    }
//    return  0;
//
//}
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    scanf("%d%d", &num1, &num2);
//    int sum = 0;
//    sum = Add(num1 ,num2);
//    printf("%d\n", sum);
//    return 0;
//}
//int main()
//{
//    int line = 0;
//    while(line <= 200)
//    {
//        printf("code +%d \n", line);
//        line++;
//    }
//
//    if(line >= 20000)
//    printf("offer present");
//    return 0;
//}
//int main()
//{
//    short input = 0;
//    printf("Would you want to study hardly ? (1/0)");
//    scanf("%d", &input);
//    if(input == 1)
//        printf("offer");
//    else
//        printf("loser");
//    //    printf("abc\n");
////    printf("%d\n", strlen("\328"));
////    printf("%c\n", '\x62');
////    printf("%d\n", 'a');
////    char arr[] = "abc";
////    char arr1[]  = {'a', 'b', 'c', };
////    printf("%d\n", strlen(arr));
////    printf("%d\n", strlen(arr1));
////    printf("%s\n", arr);
////    printf("%s\n", arr1);
////    printf("%d", arr == arr1);
////    enum Sex s1 = MALE;
////    enum Sex s2 = FEMALE;
////    enum Sex s3 = SECRET;
////    enum Color color1 = RED;
////    enum Color color2 = BLUE;
////
////    printf("%d%d\n", color1, color2);
////    color1 = BLUE;
////    printf("%d", color1);
////    printf("%d%d%d\n", s1, s2, s3);
////    int arr[MAX] = {0};
////    printf("%d\n", MAX);
////    const int n = 10;
////    int arr[n] = {0};
//
////    const int num = 10;
////    printf("%d\n", num);
////    num = 5;
////    printf("%d\n", num);
//    return 0;
//}
