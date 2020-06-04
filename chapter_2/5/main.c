#include <stdio.h>

void br();
void ic();

int main()
{
  br();
  printf(", ");
  ic();
  printf("\n");

  ic();
  printf(",\n");
  br();
  printf("\n");

  return 0;
}

void br()
{
  printf("Brasil, Russia");
}

void ic()
{
  printf("India, China");
}
