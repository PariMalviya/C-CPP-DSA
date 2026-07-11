#include <stdio.h>
int main()
{
    int n, i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1, n = 1; j <= 7; j++)
        {
            if ((j <= 3 + i) && (j >= 5 - i))
            {
                if (j < 4)
                {
                    printf("%d", n);
                    n++;
                }
                else
                {
                    printf("%d", n);
                    n--;
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
