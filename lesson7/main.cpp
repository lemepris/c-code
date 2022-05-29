#include <stdio.h>

//int main() {
//    char password[20] = {0};
//    printf("please enter the password:>");
//    scanf("%s", password);
//    printf("%s\n", password);
//    int ret = 0;
//    int ch = 0;
//    while((ch = getchar()) != '\n')
//    {
//        ;
//    }
//    printf("Are you sure your password?(Y/N)");
//    ret = getchar();
//
//    if('Y' == ret)
//        printf("Your password has kept, and it's %s\n", password);
//    else
//        printf("sorry, please enter your password again!\n");
//    return 0;
//}
//int main ()
//{
//    int ch  = 0;
//    while((ch = getchar()) != EOF)
//    {
//        if(ch < '0' || ch > '9')
//        {
//            continue;
//        }
//        else
//            putchar(ch);
//    }
//    return 0;
//}
//int main ()
//{
//    int i = 0;
//    int j = 0;
//    int n = 0;
//    for( ; i < 10; i++)
//    {
//        for( ; j <10; j++)
//        {
//            n++;
//            printf("haha%d\n", n);
//        }
//    }
//}
//int main ()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = 1;
//    for(int i = 2; i <= n ; i++)
//    {
//        ret *= i;
//    }
//    printf("%d\n", ret);
//}
//int main() {
//   int i = 0;
//   int sum = 0;
//   int ret = 1;
//   int n = 0;
//   scanf("%d", &n);
//   for( i = 1; i <= n ; i++)
//   {
//       ret *= i;
//       sum += ret;
//   }
//   printf("%d\n", sum);
//}
int main ()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 10;
    int i = 0;

    int sz =  sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", sz);
    int left  = 0;
    int right ;
    int middle;
    while ( left < right)
    {
        for(  i = 0 ; i < sz; i++ )
        {
            if( k == arr[i])
            {
                printf("find it, it's %d\n", i);
                break;
            }
        }
        if (sz == i)
            printf("not found it!");
    }
}