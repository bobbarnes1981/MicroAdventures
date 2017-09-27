#include<stdio.h>

int main()
{
  int f[99];
  for (int i = 0; i < 99; i++)
  {
    f[i] = 0;
  }

  int q[5];

  int j = 0;

  while(1)
  {
    printf("TYPE IN LINE OF INTERCEPT\n");
    printf("EXACTLY AS SHOWN, WITH COMMAS\n");
    printf("ENTER FIVE ZERO VALUES TO STOP\n");

    scanf("%i,%i,%i,%i,%i", &q[0], &q[1], &q[2], &q[3], &q[4]);

    if (q[0] == 0)
    {
      break;
    }

    for (int i = 0; i < 5; i++)
    {
      f[q[i]] = f[q[i]] + 1;
    }
  }

  for (int k = 0; k < 99; k++)
  {
    j = j + 1;
    if (j == 18)
    {
      char l;
      printf("ENTER ANY LETTER TO CONTINUE\n");
      scanf("%c", &l);
      j = 0;
    }

    printf("NUMBER %i APPEARS %i TIMES\n", k, f[0]);
  }
}

