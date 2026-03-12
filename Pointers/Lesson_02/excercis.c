#include "excercis.h"

void update_coordinate_x(coordinate_t coord, int new_x){
    coord.x = new_x;

}

coordinate_t coordinate_update_and_return_x(coordinate_t coord, int new_x){
    coord.x = new_x;
    return coord;
}
