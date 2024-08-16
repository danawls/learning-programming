#include <stdio.h>

int getSum(int *a);

int main(void)
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *poi = arr;
    int (*func)(int *a);
    func = getSum;

    printf("The sum of every porperties of array is = %i\n", func(poi));
}

int getSum(int *a)
{
    int sum = 0;

    for (int i = 0; i < 10; a++, i++)
    {
        sum += *a;
    }

    return sum;
}