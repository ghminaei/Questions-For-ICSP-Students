#include<stdio.h>
#include<stdlib.h>

struct Customer
{
    char name[20];
    char familyName[20];
    int credit;
    int password;
};
typedef struct Customer BankCustomer;

int main()
{ 
    BankCustomer* customers;
    customers = (BankCustomer*)malloc(sizeof(BankCustomer)*7);
    scanf("%s", customers[6].name);
    printf("%s\n", customers[6].name);

    return 0;
}
