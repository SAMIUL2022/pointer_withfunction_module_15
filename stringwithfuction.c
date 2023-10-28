#include <stdio.h>
#include <string.h>


void fun (char *ab)
{
for (int i = 0; i < strlen(ab); i++)
{
   printf("%c",ab[i]);
}




}
int main ()
{
int n;
scanf("%d",&n);
char ar[n];
  scanf("%s",ar);


fun(ar);

    return 0;
}