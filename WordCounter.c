#include <stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outisde a word */



main()
{
  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      putchar('\n');
    }  else if (state == OUT) {
      state = IN;
      ++nw;
      putchar('\n');
      putchar(c);
    } else {
      putchar(c);
    }
  }
  printf("\nnew lines: %d words: %d total chars: %d\n", nl, nw, nc);
}
