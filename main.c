#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include "martix.h"

int main(void) {
    double u[] = {1, 2, 3, 4};
    double v[] = {1, 2, 3, 4};

    double *result = scalar_product(3, u);
    for (int i = 0; i < 4; i++) {
        printf("%lf\n", result[i]);
    }

    return 0;
}