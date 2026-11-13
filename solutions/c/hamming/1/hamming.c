#include "hamming.h"
#include <string.h>

int compute (const char *lhs, const char *rhs) {
    int len_lhs = strlen(lhs);
    int len_rhs = strlen(rhs);
    int count = 0;
    if (len_lhs != len_rhs) {
        return -1;
    }
    else {
        for (int i = 0; i < len_lhs; i++) {
            if (lhs[i] != rhs[i]) {
                count += 1;
            }
        }
    }
    return count;
}