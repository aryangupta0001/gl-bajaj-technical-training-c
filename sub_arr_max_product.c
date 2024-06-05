// Find the max. product of sub-array.

#include <stdio.h>
int main()
{
    int A[20], N, i, j, product, maxProduct = 1;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);

    for (i = 0; i < N; i++)
    {   product = 1;
        for (j = i; j < N; j++)
        {
            product = product * A[j];
            if (maxProduct < product)
                maxProduct = product;
        }
    }

    printf("Product : %d", maxProduct);
}