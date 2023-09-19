#include "main.h"
/**
*print_array - print n element of array of intergers
*@a: array
*@n: number of elements
*Return: nothing
*/
void print_array(int *a, int n)
{
int nma;
for (nma = 0; nma < n ; nma++)
{
if (nma != n - 1)
printf("%d, ", a[nma]);
else
printf("%d", a[nma]);

}
printf("\n");
}
