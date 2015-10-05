#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
  int length, c, i, j, state;
  int digits[10];

  length = 0;
  state = OUT;
  for (i = 0; i < 10; ++i)
    digits[i] = 0;


  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      ++digits[length - 1];
      length = 0;
    } else {
      state = IN;
      ++length;
    }
  }
  if (c == EOF) {
    ++digits[length -1];
  }

  for (i = 0; i < 10; ++i) {
    printf("\n%d letter words: ", (i + 1));
    for (j = 0; j < digits[i]; ++j) {
      putchar('=');
    }
  }
}
