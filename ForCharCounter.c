#include <stdio.h>

/* count chars in input using for loop */
main()
{
  double nc;

  for (nc = 0; getchar() != EOF; ++nc)
    ;
  printf("%.0f\n", nc);
}
