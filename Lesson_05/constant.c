#include <stdio.h>

//preprocessor directive used to define macros
#define PI 3.141592

int main() {
    const int x = 5;
    // x = 10; // error
    printf("x = %d", x);
    return 0;
}