#include <stdio.h>

int main()
{
    float x = 5, y = 6, z = 7;
    printf("%.2f, %.2f, %.2f", (x+y+z)/(x-y-z), (x+y+z/3), (x+y) * (x-y) *(y-z));
    return 0;
}