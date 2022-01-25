#include <stdio.h>
#include <stdlib.h>

static void its_bit (const char *x1)
{
  double x2 = atof (x1);
  int x3 = (int)(x2 * 10 + .49);
  int x4 = x3 % 10;
  int x5 = (x3 / 10) - 1;
  printf ("%d", 36 - x4 - 9 * x5);
}

int main (int argc, const char **argv)
{
  switch (argc) {
  case 2:
    its_bit (argv[1]);
    putchar ('\n');
    break;
  case 3:
    its_bit (argv[1]);
    putchar ('-');
    its_bit (argv[2]);
    putchar ('\n');
    break;
  default:
    fprintf (stderr, "Usage: %s bit [bit]\n", argv[0]);
    return 1;
  }
  return 0;
}
