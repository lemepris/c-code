#include <stdio.h>
//if-else语句
//int main()
// {
//    short age = 42;
//    if (age < 18)
//        printf("Juveniles\n");
//    else {
//        if (age <= 28)
//            printf("The young man\n");
//        else if (age <= 40)
//            printf("The middle-aged person \n");
//        else
//            printf("The aged\n");
//        return 0;
//    }
//}

//int main() {
//    for (int i = 1; i <= 100; i++) {
//        if (i % 2 == 1)
//
//            printf("%d is odd\n", i);
//
//    }
//    return 0;
//}
//int main() {
//    int day = 0;
//    int n = 1;
//    scanf("%d", &day);
//    switch (day) {
//        default:
//            printf("Input Error");
//            break;
//        case 1:
//            if (1 == n)
//                printf("haha\n");
//        case 2:
//        case 3:
//        case 4:
//        case 5:
//            printf("Working days\n");
//            break;
//        case 6:
//        case 7:
//            printf("Rest days\n");
//            break;
//
//    }
//}
//int main ()
//{
//    int i = 0;
//    while(i < 10)
//    {
//        i++;
//        if ( i == 5)
//            continue;
//        printf("%d\n", i);
//
//    }
//    return 0;
//}
//int main ()
//{
//    char ch = getchar();
//    putchar(ch);
//    printf("\n");
//    printf("%c\n", ch);
//}
int main ()
{
    int ch = 0;
    while ( (ch = getchar()) != EOF)
    {
        putchar(ch);
    }
}