#include <stdio.h>
#include <stdlib.h>

double square_area(double side)
{
    return side * side;
}

double square_perimeter(double side)
{
    return 4 * side;
}

double circle_area(double radius)
{
    double pi = 3.14159;
    return pi * radius * radius;
}

double circle_circumference(double radius)
{

    return 2 * radius * 3.14159;
}

int main()
{
    int option=0;
    printf("Enter an option (1 for square, 2 for circle): ");
    scanf("%d", &option);

    if (option == 1)
    {
        double side=0;
        printf("Enter the side length of the square: ");
        scanf("%lf", &side);
        double area = square_area(side);
        double perimeter = square_perimeter(side);
        printf("Area: %.2lf\nPerimeter: %.2lf\n", area, perimeter);
    }
    else if (option == 2)
    {
        double radius;
        printf("Enter the radius of the circle: ");
        scanf("%lf", &radius);
        double area = circle_area(radius);
        double circumference = circle_circumference(radius);
        printf("Area: %.2lf\nCircumference: %.2lf\n", area, circumference);
    }
    else
    {
        printf("Invalid option\n");
    }

    return 0;
}

