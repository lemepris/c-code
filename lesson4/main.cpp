#include <stdio.h>

//int main() {
//    int a = 10;
//    printf("%p\n", &a);
//    char b  = 'a';
//    printf("%p\n", &b);
//    short c = 11;
//    printf("%p\n", &c);
//    printf("%d\n", sizeof(c));
//    short* p = &c;
//    printf("%d\n", sizeof(p));
//    printf("%p\n", p);
//    printf("%d\n", p == &c);
//    printf("%d\n", *p);
//    printf("%d\n", sizeof(int*));
//    return 0;
//}
//int main ()
//{
//    double f = 3.14;
//    double* p  = &f;
//    *p = 5.5;
//    printf("%lf\n", *p);
//
//}
#include <string.h>

struct Book
{
    char name[20];
    short price;
};
int main ()
{
    struct Book b = {            "C Prime Plus",            32};
    struct Book* p = &b;
    printf("%p\n", p);
    printf("%s\n", p->name);
    printf("%d\n", p->price);
    printf("The name of this book is: %s\n", b.name);
    printf("The price of this book is: %d\n", b.price);
    b.price = 50;
    printf("The price of this book is: %d\n", b.price);
    strcpy(b.name, "cyuyan");
    printf("%s\n", b.name);
    return 0;
}
