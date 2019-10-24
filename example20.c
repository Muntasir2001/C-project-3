//this program is to convert temperature from celsius to kelvin... 

#include <stdio.h>

int main ()
{
    float celsius, kelvin;

    printf("Input temperature in celsius: \n");
    scanf("%f", &celsius);
    kelvin = celsius + 273; //value to the kelvin variabel added

    printf("Temperature in kelvin is: %.2f \n", kelvin);
    return 0;
}