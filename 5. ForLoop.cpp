#include <stdio.h>

int main()
{
    int start, stop;
    scanf("%d", &start);
    scanf("%d", &stop);
    for (int i = start; i <= stop; i++)
    {
        if (i > 9)
        {
            if (i % 2 == 0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
        else if (i == 9)
        {
            printf("nine\n");
        }
        else if (i == 8)
        {
            printf("eight\n");
        }
        else if (i == 7)
        {
            printf("seven\n");
        }
        else if (i == 6)
        {
            printf("six\n");
        }
        else if (i == 5)
        {
            printf("five\n");
        }
        else if (i == 4)
        {
            printf("four\n");
        }
        else if (i == 3)
        {
            printf("three\n");
        }
        else if (i == 2)
        {
            printf("two\n");
        }
        else
        {
            printf("one\n");
        }
    }

    return 0;
}
