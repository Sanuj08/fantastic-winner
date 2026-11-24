// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
// Input: 0 (RED), 1 (YELLOW) or 2 (GREEN)
#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main(void) {
    int value = RED;
    scanf("%d", &value);
    enum TrafficLight light = (enum TrafficLight)value;
    switch (light) {
        case RED:    printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN:  printf("Go\n"); break;
        default:     printf("Invalid light\n");
    }
    return 0;
}
