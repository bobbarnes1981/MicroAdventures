#include<stdio.h>
#include<string.h>

int main()
{
  while (1)
  {
    char message[100];
 
    printf("TYPE IN MESSAGE\n");

    scanf("%s", message);

    for (int i = 0; i < 100; i++)
    {
      if (message[i] == 0x00)
      {
          break;
      }

      printf("%c", message[i]+1);
    }
    printf("\n");

    printf("IS THERE ANOTHER MESSAGE TO DECODE?\nANSWER YES OR NO\n");

    char answer[3];

    scanf("%s", answer);

    if (strcmp(answer, "YES"))
    {
      break;
    }
  }

  return 0;
}

