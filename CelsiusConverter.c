#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */

  main()
  {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /* lower limit of temp scale*/
    upper = 300; /* upper limit*/
    step = 20; /* step size */

    fahr = lower;

    printf("%4s  %3s\n", "fahr", "cel");

    while (fahr <= upper) {
      celsius = (5.0 / 9.0) * (fahr-32.0);
      printf("%3.0f %6.1f\n", fahr, celsius);
      fahr = fahr + step;
    }
  }
