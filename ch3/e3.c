#include <stdio.h>

int main(void) {
    int x, y, a, b, c, d, e, f;
    float g, h, i, j, k, l;

    // compare first pair
    scanf("%d", &x);
    scanf(" %d", &y);
    printf("%d|%d\n", x, y);
    
    // compare second pair
    scanf("-%d -%d %d%d%d%d", &a, &b, &c, &d, &e, &f);
    printf("|%d|%d|%d|%d|%d|%d|\n", a, b, c, d, e, f);
    return 0;
}


