#include <stdio.h>

void one_three();
void two();

int main()
{
  printf("Start:\n");
  one_three();
  printf("End !\n");
  return 0;
}

void one_three()
{
  printf("One\n");
  two();
  printf("Three\n");
}

void two()
{
  printf("Two\n");
}



