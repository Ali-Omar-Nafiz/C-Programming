#include <stdio.h>
int main()
{
    int n, count;
    printf("Enter the n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            else
            {
                if (j % 2 != 0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
        }
        printf("\n");
    }

    return 0;
}