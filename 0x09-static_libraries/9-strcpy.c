#include "main.h"
/**
* _strcpy - Copy and  paste string
*@dest: destination
*@src: source
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int nma = 0;
while (*(src + nma) != '\0')
{
*(dest + nma) = *(src + nma);
nma++;
}
*(dest + nma) = '\0';
return (dest);
}
