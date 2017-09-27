#include<stdio.h>

int main()
{
  int q[5];

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
      printf("%c", q[i]);
    }
    printf("\n");
  }
}

