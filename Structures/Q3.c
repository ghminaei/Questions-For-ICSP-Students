#include<stdio.h>

struct Customer
{
    char name[20];
    char familyName[20];
    int credit;
    int password;
};

int main()
{ 
    struct Customer c1, c2;
    scanf("%s", c1.name);
    scanf("%s", c2.name);
    printf("%s\n", c1.name);

    return 0;
}
