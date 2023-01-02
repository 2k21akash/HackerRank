#include <stdio.h>

int main()
{
    int sizee;
    scanf("%d", &sizee);
    int arr[sizee];
    for (int i = 0; i < sizee; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = sizee - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
