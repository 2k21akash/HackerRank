/*
    Given a positive integer , do the following:

    If , print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
    If , print Greater than 9.
    Input Format

    A single integer, .

    Constraints

    Output Format

    If , then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9.
*/

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a > 9)
    {
        printf("Greater than 9");
    }
    else
    {
        if (a == 1)
        {
            printf("one");
        }
        else if (a == 2)
        {
            printf("two");
        }
        else if (a == 3)
        {
            printf("three");
        }
        else if (a == 4)
        {
            printf("four");
        }
        else if (a == 5)
        {
            printf("five");
        }
        else if (a == 6)
        {
            printf("six");
        }
        else if (a == 7)
        {
            printf("seven");
        }
        else if (a == 8)
        {
            printf("eight");
        }
        else
        {
            printf("nine");
        }
    }

    return 0;
}
