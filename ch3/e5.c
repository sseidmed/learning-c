#include <stdio.h>

int main(void) {
    int i;
    float x, y;
    // Enter 12.3 45.6 789 at the user prompt
    scanf("%f%d%f", &x, &i, &y);
    printf("%f|%d|%f\n", x, i, y);
    return 0;
}
