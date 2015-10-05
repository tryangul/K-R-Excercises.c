#include <stdio.h>


/* prints histogram of the frequency of lowercase letters */
main()
{
  int c, i, j;
  int letters[26];

  for (i = 0; i < 26; ++i)
    letters[i] = 0;

  while ((c = getchar()) != EOF) {
    ++letters[c - 'a'];
  }

  for (i = 0; i < 26; ++i) {
    printf("\n%c: ", 'a' + i); {
    for (j = 0; j < letters[i]; j++)
      putchar('=');
    }
  }
}
