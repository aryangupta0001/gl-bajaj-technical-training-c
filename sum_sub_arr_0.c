#include<stdio.h>

int main()
{
    int A[20], N, sum = 0, i, j, length = 0;

    scanf("%d", &N);

    for(i = 0; i<N; i++)
        scanf("%d", &A[i]);
    
    for(i = 0; i<N; i++)
    {   sum = A[i];
        length = 0;
        for(j = i; j<N; j++)
        {
            sum+=A[j];
            if(sum == 0)
            {
                length++;
            }
            else
                if(length>0)
                    break;
        }

        if(length)
            printf("%d\n", length);
    }
}   