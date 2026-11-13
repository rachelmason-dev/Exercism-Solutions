#include "darts.h"
#include <stdlib.h>
#include <math.h>

uint8_t score(coordinate_t land_position) {
    float x = land_position.x_coord;
    float y = land_position.y_coord;
    float distance = sqrt(pow(fabsf(x), 2) + pow(fabsf(y), 2));
    if (distance > 10) {
        return 0;
    }
    else if (distance > 5) {
        return 1;
    }
    else if (distance > 1) {
        return 5;
    }
    else {
        return 10;
    }
}
