/*Check Prime in Range: Write a program to print all prime numbers
between two given numbers*/

#include <stdio.h>
int main()
{

    int first_number, secnd_number;

    printf("Enter first number: ");
    scanf("%d", &first_number);

    printf("Enter Second numbr: ");
    scanf("%d", &secnd_number);

    // int flag = 0;

    int flag = 1;
    int i;
    for (int j = first_number; j < secnd_number; j++)
    {
        i = 2;
        flag = 1;
        for (i; i < j; i++)
        {

            if (j % i == 0) 
            {
                flag = 0;
            }
        }
        if (flag)
        {
            printf("%d\n", j);
        }
    }

    return 0;
}
