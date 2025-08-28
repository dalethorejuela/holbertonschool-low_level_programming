#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - start program
 * return = 0
 * Positive anything is better than negative nothing
 */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  if (n > 0)
    {
      printf("%d es positivo\n", n);
    }
  else if (n == 0)
    {
      printf("%d es cero\n", n);
    }
  else
    {
      printf("%d es negativo\n", n);
    }

  return (0);
}
