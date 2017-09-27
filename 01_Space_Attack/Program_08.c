#include<stdio.h>
#include<string.h>

void gas();

int main()
{
  char c[10];

  printf("ENTER PASSWORD\n");
  scanf("%s", c);

  char s[] = "DISABLED";

  if (strcmp(s, "DISABLED") == 0)
  {
    gas();
    return 0;
  }

  if (strcmp(c, "SCORPIO") != 0)
  {
    gas();
    return 0;
  }

  for (int i = 0; i < 5; i ++)
  {
    printf("CIRCUIT # %i DEACTIVATED\n", i);
    for (int k = 220; k < 880; k += 5)
    {
      // SOUND k,0.5
    }
  }

  for (int k = 880; k < 220; k -= 5)
  {
    // SOUND k,0.5
  }

  printf("ALL CIRCUITS SHUT DOWN\n");
  printf("YOU REALLY TURN ME OFF\n");

  return 0;
}

void gas()
{
  printf("GET READY TO BE GASSED\n");
  printf("PSSSSSSSSSSSSS\n");

  for (int j = 0; j < 5; j++)
  {
    // SOUND 220,2:SOUND 146,2 
  }

  printf("BY THE TIME YOU SEE THIS\n");
  printf("IT WILL BE TOO LATE FOR ACT\n");
}

