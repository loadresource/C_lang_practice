#include <stdio.h>
#include "LogicalOperator.h"

int main() {
  printf("%d\n", can_access_registry(1, 150, 1));  // Output: 1
  printf("%d\n", can_access_registry(0, 150, 1));  // Output: 1
  printf("%d\n", can_access_registry(0, 50, 1));   // Output: 0
  printf("%d\n", can_access_registry(0, 150, 0));  // Output: 0

  return 0;
}
