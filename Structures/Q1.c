#include<stdio.h>

//Dynamic memory allocation


int main()
{ 
    int* a;
    a = (int*)malloc(sizeof(int)*6);
    a[0] = 9;
    a[4] = 8;
    printf("%d\n", a[0]);

    
    return 0;
}
