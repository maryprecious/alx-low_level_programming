#include <stdio.h>

/**
 * main - Entry point for printing combination of two numbers.
 *
 * Return: Always 0 when (success)
 */
void print_comb2(int n)
{
  for (int i = 0; i < n; i++) 
  {
    for (int j = i + 1; j < n; j++) 
    {
      if (i == 8 && j == 9) 
      {
        print("89");
      }
      else 
      {
        print("%d%d", i, j);
      }
    }
  }
}

int main() 
{
  print_comb2(9);
  return 0;
}
