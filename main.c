#include <stdio.h>

int main() {
    int accelValue;
    int distanceValue;
    int soundValue;

    int score;

    while (1) {
        score = 0;

        accelValue = getAccelSensor();
        distanceValue = getDistanceSensor();
        soundValue = getSoundSensor();

        if (accelValue > 150) {
            score += 2;
        }

        if (soundValue > 120) {
            score += 2;
        }

        if (distanceValue < 20) {
            score += 1;
        }

        if (score <= 1) {
            ledOff();
        } else if (score <= 3) {
            ledLow();
        } else {
            ledHigh();
        }

        wait(100);
    }

    return 0;
}
