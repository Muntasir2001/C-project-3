#include <stdio.h>
#define PI 3.142

int main() 
{
    float r;
    printf("Input the radius of the circle \n");
    scanf("%f", &r);
    printf("The area of the circle is %.2f \n", PI * r * r);
    printf("The circumeference of the circle is %.2f \n", 2 * PI * r);
    return 0;
}