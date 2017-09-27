#include<stdio.h>

int main()
{
  int n = 10;

  while(1)
  {
    if (n <= 0)
    {
      printf("BLAST-OFF\n");
      break;
    }

    printf("T MINUS %i AND COUNTING\n", n);

    n = n - 1;

    if (n >= 100)
    {
      printf("ROCKET HAS OVERHEATED ON THE LAUNCHPAD\n");
      printf("THIS HAS BEEN YOUR FIRST AND FINAL ACT\n");
      break;
    }

    for (int i = 0; i < 300; i++)
    {
      // do nothing
    }
  }

  return 0;
}

