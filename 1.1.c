//Linear Searching in an array
#include <stdio.h>
int main(void)
{
    //Populating the array
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%i", &arr[i]);
    }

    //Searching
    int x;
    printf("Enter element to search: ");
    scanf("%i", &x);
    for (int p = 0; p < 10; p++)
    {
        if (x == arr[p])
        {
            printf("Element found at position %i\n", p);
            return 0;
        }
    }
    printf("Element not found\n");
    return 0;
}
