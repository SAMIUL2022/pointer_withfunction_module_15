#include <stdio.h>


int main ()
{
int x=10;
int *ptr=&x;
x=250;

// printf("%p\n",ptr);
// printf("%p\n",&x);
// printf("%p\n",&ptr);
// printf("%d\n",*ptr);
printf("%d\n",*ptr);

    return 0;
}