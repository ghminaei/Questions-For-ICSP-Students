//about const pointers

#include<stdio.h>
int main()
{	
    int a = 5;
    const int *ptr = &a;
 
    int b = 6;
    ptr = &b;
	printf("%d  %d\n", a, b);
	return 0;
}