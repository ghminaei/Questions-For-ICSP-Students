//about const pointers

#include<stdio.h>
int main()
{	
    int value = 5;
    int *const ptr = &value; // ptr will always point to value
    *ptr = 6; // allowed, since ptr points to a non-const int
    printf("%d\n", value);
	return 0;
}