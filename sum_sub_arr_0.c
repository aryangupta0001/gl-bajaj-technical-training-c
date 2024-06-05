// WAP to find the first subarray with sum = 0, print its  length also.


#include<stdio.h>

int main()
{
    int A[20], N, sum = 0, i, j, length = 0;

    scanf("%d", &N);

    for(i = 0; i<N; i++)
        scanf("%d", &A[i]);
    
    for(i = 0; i<N; i++)
    {   sum = 0;
        length = 0;

        for(j = i; j<N; j++)
        {   sum+=A[j];
            length++;

            if(sum == 0)
                break;
        }
        
        if(length && !sum)
            break;
    }

    if(length && !sum)
        printf("%d\n", length);
    else
        printf("No Substring with sum 0");
}   