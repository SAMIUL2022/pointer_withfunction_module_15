#include <stdio.h>

void fun (int x)
{

x=100;
printf("main xer addrress-%d\n",&x);
printf("%d\n",x);

}

int main ()
{

int x =10;

fun(x);
printf("main xer addrress-%d\n",&x);
x=200;
printf("%d",x);
    return 0;
}