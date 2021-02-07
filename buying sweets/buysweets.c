#include <stdio.h>

int main()
{
    int n,x,t,sum=0;
    int min, remainder;
    int N[101] ;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &n, &x);
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &N[j]);
            sum = sum + N[j] ;
        }
        
        remainder = sum%x ;
        // if remainder >= any of the value of notes then print -1
        // finding min value of the value of notes
        min = N[1] ;
        for (int m = 2; m <= n ; m++)
        {
            if (min > N[m])
            {
                min = N[m] ;
            }
            
        }
        
        if (remainder < min)
        {
            printf("%d\n", (sum/x));
        }
        else
        {
            printf("-1\n");
        }
        sum=0;
    }
    return 0;
}