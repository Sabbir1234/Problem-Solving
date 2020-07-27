#include <stdio.h>


/**
 * Function to find cube of any number
 * @num Number whose cube is to be calculated
 */
double cube(double num)
{
    return (num * num * num);
}



int main()
{
    int num;
    double c;

    printf("Enter any number: ");
    scanf("%d", &num);

    c = cube(num);

    printf("Cube of %d is %.2f\n", num, c);

    return 0;
}
