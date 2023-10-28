#include <stdio.h>


void fun (int *ab)
{
for (int i = 0; i < 5; i++)
{
   printf("%d ",ab[i]);
}




}
int main ()
{


int ar[5];
for (int i = 0; i < 5; i++)
{
  scanf("%d",&ar[i]);
}

fun(ar);

    return 0;
}