// WAP to place all negative no. at the starting of the array

#include<stdio.h>

int main()
{
    int A[20], N, i, k = 0, temp;

    scanf("%d", &N);

    for(i = 0; i<N; i++)
        scanf("%d", &A[i]);


    for(i = 1; i<N; i++)
        if(A[i]<0)
            while(k<i)
            {   if(A[k]>=0)
                {   temp = A[k];
                    A[k] = A[i];
                    A[i] = temp;
                    k++;
                    break;
                }
                k++;
            }

    printf("\n");

    for(i = 0; i<N; i++)
        printf("%d\t", A[i]);

}