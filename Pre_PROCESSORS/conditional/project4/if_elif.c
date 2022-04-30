#include <stdio.h>

#define I (1) //change all zeroes to 1 ONE BYE ONE
#define LOVE (1)
#define YOU (1)

int main() {
    #if I
    printf("I\n");
    #elif LOVE
    printf("LOVE\n");
    #else YOU
    printf("YOU\n");
    #endif
    return 0;
}
