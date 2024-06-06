#include<stdio.h>

int main()
{
    int A[20], N, i, j, maxSum = 0, sum;

    scanf("%d", &N);

    for(i = 0; i<N; i++)
        scanf("%d", &A[i]);
    
    for(i = 0; i<N; i++)
    {   sum = 0;
        for(j = i; j<N; j++)
        {
            sum = sum + A[i];
            if(maxSum<sum)
                maxSum = sum;
            
        }
    }

    printf("Max Sum : %d", sum);
}