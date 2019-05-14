//what is the output?

#include<stdio.h>
int main()
{
	char *ptr;
	char string[] = "C programming language!\n";
	ptr = string;
	ptr += 6;
	printf("%s",ptr);
	return 0;
}