// WAP to place all odd no. at the end of array

#include<stdio.h>

int main()
{
    int A[30], M, N, i, temp;

    scanf("%d", &N);

    M = N;

    for(i = 0; i<N; i++)
        scanf("%d", &A[i]);
    
    i = 0;

    while(i<N)
    {   if(A[i]%2)
        {
            if(A[N-1]%2)
                N--;
            
            else
            {   temp = A[N-1];
                A[N-1] = A[i];
                A[i] = temp;
                i++;
                N--;
            }
        }
        else
            i++;
    }       

    for(i = 0; i<M; i++)
        printf("%d\t", A[i]);
} 