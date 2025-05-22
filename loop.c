#include <stdio.h>
int main()
{
    int i = 0;

    // for loop
    for (i = 0; i <= 10; i++)
    {

        printf("%d  ", i);
    }
    printf("\n");

    // while loop

    int j = i;

    while (j <= 20)
    {
        printf("%d  ", j);
        j++;
    }
    printf("\n");

    // do while loop

    int k = j;

    do
    {
        printf("%d  ", k);
        k++;

    } while (k <= 30);

    return 0;
}
