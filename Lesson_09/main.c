#include <stdio.h>
#include "ifstatement.h"

int main() {
  printf("%s\n", get_temperature_status(50));   // Output: too cold
  printf("%s\n", get_temperature_status(100));  // Output: too hot
  printf("%s\n", get_temperature_status(70));   // Output: just right
  printf("%s\n", get_temperature_status(75));   // Output: just right

  return 0;
}
