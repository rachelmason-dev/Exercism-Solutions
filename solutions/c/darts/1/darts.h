#ifndef DARTS_H
#define DARTS_H
#include <stdint.h>


typedef struct {
    float x_coord;
    float y_coord;
} coordinate_t;

uint8_t score(coordinate_t landing_position);
#endif
