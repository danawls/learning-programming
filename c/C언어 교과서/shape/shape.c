#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define PI 3.14159

void printCircle(int radius);
void printSquare(int side);
void printTriangle(int base, int height);
int getInput(int *a, int *b);

int main()
{
    char shape[10];
    int dimension1, dimension2;
    float area;

    printf("Enter the shape (circle, square, triangle): ");
    scanf("%9s", shape); // Limit string input to prevent buffer overflow

    if (strcmp(shape, "circle") == 0)
    {
        if (!getInput(&dimension1, NULL))
        {
            area = PI * dimension1 * dimension1;
            printf("Area of the circle: %.2f\n", area);
            printCircle(dimension1);
        }
    }
    else if (strcmp(shape, "square") == 0)
    {
        if (!getInput(&dimension1, NULL))
        {
            area = dimension1 * dimension1;
            printf("Area of the square: %.2f\n", area);
            printSquare(dimension1);
        }
    }
    else if (strcmp(shape, "triangle") == 0)
    {
        if (!getInput(&dimension1, &dimension2))
        {
            area = 0.5 * dimension1 * dimension2;
            printf("Area of the triangle: %.2f\n", area);
            printTriangle(dimension1, dimension2);
        }
    }
    else
    {
        printf("Unsupported shape! Exiting...\n");
        return 1;
    }

    return 0;
}

int getInput(int *a, int *b)
{
    printf("Enter %s: ", b == NULL ? "dimension" : "dimensions");
    if (scanf("%d", a) != 1 || (b != NULL && scanf("%d", b) != 1))
    {
        printf("Invalid input! Exiting...\n");
        return 1; // Error
    }
    return 0; // Success
}

void printCircle(int radius)
{
    for (int y = -radius; y <= radius; y++)
    {
        for (int x = -radius; x <= radius; x++)
        {
            if (x * x + y * y <= radius * radius)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void printSquare(int side)
{
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void printTriangle(int base, int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
