#include <stdio.h>

int main()
{
    int N = 6;
    int arr[] = {12, 7, 19, 26, 11, 6};
    int i;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    int secondSmallest = arr[0];
    for (i = 0; i < N; i++)

    {
        if (arr[i] < secondSmallest && arr[i] > secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }

    printf("the value is :%d", secondSmallest);
    return 0;
}