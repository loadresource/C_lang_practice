#ifndef EXERCISE_H
#define EXERCISE_H

typedef struct {
    int x;
    int y;
    int z;
} coordinate_t;

void update_coordinate_x(coordinate_t coord, int new_x);

coordinate_t coordinate_update_and_return_x(coordinate_t coord, int new_x);



#endif // EXERCISE_H