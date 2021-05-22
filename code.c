#include <stdio.h>

int main()
{
    int a[10000], i, j, k, n;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (k = 0; k < n; k++)
    {
        for (j = k + 1; j < n; j++)
        {
            if (a[k] == a[j])
                printf("Duplicate number: %d ", a[j]);
        }
    }

    printf("\n");

    int c, y, z;
    for (y = 0; y < n; y++)
    {
        c = 0;
        for(z = 0; z<n; z++)
        {
            if(a[y] == a[z])
            c++;
        }
        if (c == 1)
            printf("Unique number: %d ", a[y]);
       
        
    }
    return 0;
}
