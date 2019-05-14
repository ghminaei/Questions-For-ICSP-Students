#include<stdio.h>
int main()
{
    char *ptr = "CLanguage";
    printf("%c\n", *&*&*ptr);
    return 0;
}