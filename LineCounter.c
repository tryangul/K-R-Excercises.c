#include <stdio.h>

/* counts lines of input, as well as blank spaces and tabs */

main()
{
  int c, nl, nt, nb;
  nt = 0;
  nl = 0;
  nb = 0;

  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
    else if (c == '\t')
      ++nt;
    else if (c == ' ')
      ++nb;
  printf("lines tabs spaces");
  printf("\n%5d %4d %6d\n", nl, nt, nb);
}
