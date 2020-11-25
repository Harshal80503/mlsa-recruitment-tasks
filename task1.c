#include<stdio.h>
int main()
{
        float x, y, z, n;
        int k;

        printf("enter the values of x, y, z\n");
        scanf("%f %f %f", &x, &y, &z);

        n = y/x;

        k = n + 1;

        if( y+z >= k*x)
        {
                printf("YES");
        }

        else
        {
                printf("NO");
        }
}