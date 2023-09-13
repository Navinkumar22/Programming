#include <stdio.h>
#include <stdlib.h>
int main() {

    for (int hr = 0; hr < 24; hr++) {
        for (int min = 0; min < 60; min++) {
            float hrangle = (hr % 12) * 30 + (min / 60.0) * 30;
            float minangle = min * 6;
            float angle = hrangle - minangle;

            if (angle < 0) {
                angle = angle*-1;
            }

            if (angle == 90) {
                printf("%02d:%02d ", hr, min);
            }
        }
    }

    printf("\n");

    return 0;
}
