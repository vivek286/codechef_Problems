#include<stdio.h>
#include <math.h>

int main()
{
    int t,count=0;
    float k, d, r,i,j;

    scanf("%d", &t);
    for (int c = 1; c <= t; c++)
    {
        printf("give radius\n");
        scanf("%f", &r);
        printf("give min dist k(in cm)\n");
        scanf("%f", &k);
        k = k/100 ;
        printf("possible cordinates are\n");
        i=r-1;
        j=r-1;
        while (i >= (r-k))
        {
            while (j >= (r-k))
            {
               printf("hi");
               d = sqrt(i*i + j*j) ;
               if (d >= (r-k) && d<r )
               {
                   printf("%d %d ",(int)i, (int)j);
               }
                j=j-1;
            }
            i=i-1 ;
            
        }
        printf("\n");
        
    }
    return 0;
    
}
