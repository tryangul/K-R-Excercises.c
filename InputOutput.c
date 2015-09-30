#include <stdio.h>

/* copy input to output; version 1 */

main()
{
  int c;

  while ((c = getchar()) != EOF) {
    putchar(c);
    ;
  }

  // printf("%2d", (getchar() != EOF)); /* test to see value of expression */

  // printf("%6d", EOF); /* find value of EOF */
}
