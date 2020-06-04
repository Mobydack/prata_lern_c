#include <stdio.h>

void jolly();
void deny();

int main()
{
  jolly();
  jolly();
  jolly();
  deny();

  return 0;
}


void jolly()
{
  printf("He is jolly funny!\n");
}

void deny()
{
  printf("No one can deny it!\n");
}
