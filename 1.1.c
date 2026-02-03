//Linear Searching in an array
#include <stdio.h>
int main(void)
{
    //Populating the array
    int arr[10];
    for (int i = 0; i <= 10; i++)
    {
        scanf("Enter element: %i", &arr[i]);
    }

    //Searching
    int x;
    scanf("Enter element to search: %i", &x);
    for (int p = 0; p <= 10; p++)
    {
        if (x == arr[p])
        {
            printf("Element found at position %i", p);
            break;
        }
        printf("Element not found");
    }
}