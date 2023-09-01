Question
Input the hour and minute to find the angle of the hour hand and minute hand.
Eg.
(input)Hour: 3 Minute:30
(output)Angle: 75 deg

#include <stdio.h>
#include <math.h>

int main() {
    int hr, min;
    printf("ENTER HOUR:");
    scanf("%d", &hr);
    printf("ENTER MINUTE:");
    scanf("%d", &min);
    if (hr < 0 || hr > 12 || min < 0 || min >= 60) {
        printf("Wrong input.");
        return 0;
    }
    float hrangle = (hr % 12) * 30 + (min / 60.0) * 30;
    float minangle = min * 6;
    float angle = fabs(hrangle - minangle);    if (angle > 180) {
        angle = 360 - angle;
    }
    printf("Angle: %.2f deg\n", angle);

    return 0;
}
