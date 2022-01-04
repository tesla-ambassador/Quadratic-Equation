#include <stdio.h>
#include <math.h>

int main(void)
{
    // Prompt user for input a, b and c.
    int a, b, c;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Input c: ");
    scanf("%d", &c);

    // The maths begins here.
    // Initiate d and x.
    float d;
    float x1, x2;
    // Calculate the value of d.
    int y = b * b - 4 * a * c;
    d = sqrt(y);
    // Calculate the value of x depending on the value of d.
    if (d > 0)
    {
        x1 = (-b + d) / 2 * a;
        x2 = (-b - d) / 2 * a;
        printf("The values of the quadratic equation are %.2f and %.2f.\n", x1, x2);
    }
    else if (d == 0)
    {
        // Both roots are equal.
        x1 = -b / 2 * a;
        x2 = x1;
        printf("The values of the quadratic are equal and they are &d.", x2);
    }
    else
    {
        printf("The quadratic has imaginary roots.");
    }
}
