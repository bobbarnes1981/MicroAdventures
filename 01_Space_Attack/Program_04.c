#include<stdio.h>

void securityViolation();

int main()
{
  printf("ENTER FIRST NUMBER OF COMBINATION\n");

  int n;

  scanf("%i", &n);
  if (n == 99)
  {
    printf("SOS SENT TO CONTROL CENTRE\n");
    return 0;
  }

  if (n != 32)
  {
    securityViolation();
    return 0;
  }

  printf("ENTER SECOND NUMBER OF COMBINATION\n");

  scanf("%i", &n);
  if (n != 48)
  {
    securityViolation();
    return 0;
  }

  printf("ENTER THIRD NUMBER OF COMBINATION\n");

  scanf("%i", &n);
  if (n != 61)
  {
    securityViolation();
    return 0;
  }

  printf("AIR LOCK IS OPEN. YOU MAY PROCEED.\n");
}

void securityViolation()
{
  printf("SECURITY VIOLATION\n");
  printf("INTRUDER IS TERMINATED\n");
}

