// #include <stdio.h>
// #include <math.h>

struct Point3D {
    int x;
    int y;
    int z;
};

// double distance(struct Point3D p1, struct Point3D p2) {

//     double dx = p2.x - p1.x;
//     double dy = p2.y - p1.y;
//     double dz = p2.z - p1.z;

//     return sqrt(dx * dx + dy * dy + dz * dz);
// }

// int main() {
//     struct Point3D p1 = {.x= 1, .y= 2, .z= 3};
//     struct Point3D p2 = {.x= 4, .y= 5, .z= 6};

//     double dist = distance(p1, p2);
//     printf("Distance: %f", dist);
//     return 0;
// }