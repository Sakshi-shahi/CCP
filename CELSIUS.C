#include <stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("enter temperature in farenheit");
    scanf("%f",&fahrenheit);
    celsius= (5/9)*(fahrenheit-32);
    printf("%2ffarenheit=%2f celsius",fahrenheit,celsius);
    return(0);
}