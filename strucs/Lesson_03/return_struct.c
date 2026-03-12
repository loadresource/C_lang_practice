#include "return_struct.h"

struct Coordinate new_coord(int x, int y, int z) {
  struct Coordinate coord = {.x = x, .y = y, .z = z};
  return coord;
}

struct Coordinate scale_coordinate(struct Coordinate coord, int factor) {
  // ?
    struct Coordinate c = {.x = coord.x, .y = coord.y, .z = coord.z};
    c.x *=factor;
    c.y *=factor;
    c.z *=factor;
    return c;
}