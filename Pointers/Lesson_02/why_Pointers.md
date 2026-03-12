# Why Pointers?

## try to recreate the same behavior without pointers

```python

class Coordinate:
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z
    #end of class

#function apart from the class
def update_coordinate_x(coord, new_x):
    coord.x = new_x

c = Coordinate(1, 2, 3)
print(c.x)  # 1
update_coordinate_x(c, 4)
print(c.x)  # 4

```

in C no use class because , to a group data use struct

```c
typedef struct {
    int x;
    int y;
    int z;
} coordinate_t; //Coordinate
```

to recreate the `def update_coordinate_x` function in C

```c
coordinate_t update_coordinate_x(coordinate_t coord, int new_x) {
    coord.x = new_x;
    return coord;
}

```

and the section to view a result

```c
#include <stdio.h>
#include "excercis.h"

int main() {
    coordinate_t c = {1, 2, 3};
    printf("Initial x: %d\n", c.x);
    c = update_coordinate_x(c, 4);
    printf("Updated x: %d\n", c.x);
    return 0;
}
```