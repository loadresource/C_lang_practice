#include <stdio.h>
#include "typedef.h"

int main() {
  coordinate_t coord = new_coord(1, 2, 3);
  coordinate_t scaled = scale_coordinate(coord, 2);
  printf("Scaled coordinate: (%d, %d, %d)\n", scaled.x, scaled.y, scaled.z);
  return 0;
}