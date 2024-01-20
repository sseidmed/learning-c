#include <stdio.h>

int main(void){
    int i, j;
    float x;
    
    // Enter the following values: 10.3 5 6
    // You will see that i will capture 10 and leave 0.3 to the next scanf which is x
    // Then after you enter the program will terminate because j grabs that value and
    // we have no variables left
    scanf("%d%f%d", &i, &x, &j);
    printf("%d%f%d\n", i, x, j);
    return 0;
}
