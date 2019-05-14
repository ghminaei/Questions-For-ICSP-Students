//about const pointers

#include<stdio.h>
int main()
{
	int a = 5;
    const int *ptr = &a;
    //*ptr = 6;
    a = 6;
	printf("%d\n", a);
	return 0;
}