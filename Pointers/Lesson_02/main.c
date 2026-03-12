#include <stdio.h>
#include "excercis.h"

int main() {
    coordinate_t c = {1, 2, 3};
    printf("Initial x: %d\n", c.x);
    update_coordinate_x(c, 4);
    printf("Updated x: %d\n", c.x);
    return 0;
}