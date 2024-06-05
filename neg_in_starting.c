// WAP to place all negative no. at the starting of the array

#include<stdio.h>

int main()
{
    int A[20], N, i, j, k = 0, temp;

    scanf("%d", &N);

    for(i = 0; i<N; i++)
        scanf("%d", &A[i]);
    
    i = 0;

    while(i<N)
    {   if(A[i]<0)
        {   temp = A[i];
            j = i;

            while(j>0)
                if(A[j-1] >= 0)
                {   A[j] = A[j-1];
                    j--;
                }

                else
                    break;

            A[j] = temp;
        }

        i++;
    }
    
    for(i = 0; i<N; i++)
        printf("%d\t", A[i]);

}