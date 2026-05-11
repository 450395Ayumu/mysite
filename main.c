// 基礎プログラミングII SchooMy 衝撃検知センサー

#include <stdio.h>

int main() {
    int soundValue;
    int threshold = 120;

    while (1) {
        soundValue = getSoundSensor();

        if (soundValue > threshold) {
            ledOn();
            wait(500);
            ledOff();
        } else {
            ledOff();
        }
    }

    return 0;
}
