#include <stdio.h>
#include "return_struct.h"

int main() {
  struct Coordinate coord = new_coord(1, 2, 3);
  struct Coordinate scaled = scale_coordinate(coord, 2);
  printf("Scaled coordinate: (%d, %d, %d)\n", scaled.x, scaled.y, scaled.z);
  return 0;
}