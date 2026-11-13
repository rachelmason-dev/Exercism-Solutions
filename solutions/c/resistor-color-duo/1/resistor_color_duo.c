#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t colors[]) {
    uint16_t color1 = colors[0];
    uint16_t color1_ten = color1 * 10;
    uint16_t color2 = colors[1];
    return color1_ten + color2;
}