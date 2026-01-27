#include<stdio.h>
int main()
{
int a = 1;
int * pointer_to_a = &a;
printf("The value a is %d\n", a);
printf("The value of a is also %d\n", pointer_to_a);    return 0;
}
