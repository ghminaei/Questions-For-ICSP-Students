#include<stdio.h>
#include<stdlib.h>

struct Customer
{
    char name[20];
    char familyName[20];
    int credit;
    int password;
};

int main()
{ 
    struct Customer* customers;
    customers = (struct Customer*)malloc(sizeof(struct Customer)*7);
    scanf("%s", customers[6].name);
    printf("%s\n", customers[6].name);

    return 0;
}
