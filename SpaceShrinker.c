#include <stdio.h>

main()
{
  int c, spaces;
  spaces = 0;

  while ((c = getchar()) != EOF)
    if (c == ' ' && spaces == 0) {
      putchar(c);
      spaces = 1;
    }
    else if (c != ' ') {
      putchar(c);
      spaces = 0;
    }  
}
