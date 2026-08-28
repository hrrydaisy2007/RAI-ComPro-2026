#include <stdio.h>

struct Time {
    int minute;
    int seconds;
};

int main(void) {
    struct Time times[3];
    int total_seconds = 0;

    for(int i = 0; i < 3; i++) {
        printf("Time input (m:s): ");
        scanf("%d:%d", &times[i].minute, &times[i].seconds);

        total_seconds += (times[i].minute * 60) + times[i].seconds;
    }
    printf("Total time elasped: %d second(s)\n", total_seconds);

    return 0;
}
