#include <stdio.h>
int atoi_base(const char *str, int base);

int main (int argc, char **argv)
{
  if (argc != 2)
    return (0);
  printf("%d\n", atoi_base(argv[1], 16));
}
