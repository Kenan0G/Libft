#include<stdio.h>

int main()
{
    char *str;
//    char *str2;
    void *pointeur1;

    str = "2222";
//    str2 = "44";
    pointeur1 = &str;
    printf("%s\n", str);
    printf("%p\n", pointeur1);
    printf("%p\n", &str);


    return (0);

}
