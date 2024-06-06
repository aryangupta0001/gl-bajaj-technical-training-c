// Find the common elements in 3 unsorted arrays.

#include<stdio.h>

int main()
{
    int A[20], B[20], C[20], S1, S2, S3, i, j, ele, count;

    scanf("%d", &S1);
    scanf("%d", &S2);
    scanf("%d", &S3);

    for(i = 0; i<S1; i++)
        scanf("%d", &A[i]);
    
    for(i = 0; i<S2; i++)
        scanf("%d", &B[i]);
    
    for(i = 0; i<S3; i++)
        scanf("%d", &C[i]);
    

    for(i = 0; i<S1; i++)
    {   ele = A[i];
        count = 0;
        
        for(j = 0; j<S2; j++)
            if(A[i] == B[j])
            {   count++;
                break;
            }

        if(count)
            for(j = 0; j<S3; j++)
                if(A[i] == C[j])
                {   count++;
                    break;
                }

        if(count == 2)
            printf("%d\t", A[i]);
    }
}