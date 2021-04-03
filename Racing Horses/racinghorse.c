#include <stdio.h>
#include <string.h>
int main()
{
    int t,n;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d\n", &n);
        long int arr[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        long int mini=1000000000;
        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < n; y++)
            {
                if (arr[x]>arr[y])
                {
                    if (mini> arr[x] - arr[y])
                    {
                        mini= arr[x] - arr[y];
                    }
                    
                }
                
            }
    
        }
        printf("%ld", mini);
    }
    
    
    return 0;
}