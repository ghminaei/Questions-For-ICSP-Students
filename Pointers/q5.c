//about const pointers

#include<stdio.h>
int main()
{	
    int value1 = 5;
    int value2 = 6;
 
    int * const ptr = &value1;
    //ptr = &value2; //not okay
	return 0;
}