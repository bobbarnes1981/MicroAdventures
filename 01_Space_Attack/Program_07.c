#include<stdio.h>
#include<stdlib.h>

void r();
void l();
void d();
void u();

int main()
{
  int p = 10;
  int m = 0;
  int b = 0;

  while(1)
  {
    int a = (rand() % 4) + 1;

    switch (a)
    {
      case 1:
        r();
        break;
      case 2:
        l();
        break;
      case 3:
        d();
        break;
      case 4:
        u();
        break;
    }

    int c;

    printf("INPUT COMMAND\n");
    scanf("%i", &c);

    c = 5;

    if (a == c)
    {
      m = m + 1;
      p = p + 1;

      switch (c)
      {
        case 1:
          l();
          break;
        case 2:
          r();
          break;
        case 3:
          u();
          break;
        case 4:
          d();
          break;
      }

      printf("DIRECT HIT!!!\n");
    }
    else
    {
      printf("OOPS! YOU MISSED\n");

      b = b + 1;
      p = p - 1;
    }

    for (int i = 0; i < 300; i++)
    {
      // nothing
    }

    if (p == 0)
    {
      break;
    }
  }

  printf("ACT %i BRUTE %i\n", m, b);

  return 0;
}

void r()
{
  for (int i = 0; i < 10; i++)
  {
    printf("\n");
  }

  printf("**********>\n");
}

void l()
{
  for (int i = 0; i < 10; i++)
  {
    printf("\n");
  }

  printf("          <**********\n");
}

void d()
{
  for (int i = 0; i < 10; i++)
  {
    printf("          *\n");
  }

  printf("         ***\n");
  printf("          *\n");
}

void u()
{
  for (int i = 0; i < 10; i++)
  {
    printf("\n");
  }

  printf("          *\n");
  printf("         ***\n");

  for (int i = 0; i < 10; i++)
  {
    printf("          *\n");
  }
}
