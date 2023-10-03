#include "main.h"

/**
*_strlen - returns the length of a string
* @s: string
*Return: returns lenght;
*/
int _strlen(char *s)
{
int adam, eve;
eve = 0;
for (adam = 0; s[adam] != '\0'; adam++)
eve++;

return (eve);
}
