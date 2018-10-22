#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "func.h"

int sieve(int target) {
  int size = (int)(target * log(target) * 1.15);
  char * numbers = malloc(size);

  for (int i=2; i<size; i++) {
    numbers[i] = 1;
  }

  int counter = 0;
  for (int i=2; i<size; i++) {
    if (numbers[i]) {
      for (int j=i*2; j<size; j+=i) {
	numbers[j] = 0;
      }
      counter++;
    }
    if (counter == target) {
      return i;
    }
  }
  return 0;
}

