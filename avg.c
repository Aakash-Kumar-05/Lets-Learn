#include<stdio.h>

int main()
{
    int i,j,k,sum = 0,avg;
    printf("Enter a avg no. =");
    scanf("%d",&j);
    for ( i = 1; i <= j; i++)
    {
        /* code */
        printf("Enter a number = ");
        scanf("%d",&k);
        sum = k + sum;
        
        
    }
    printf("sum is = %d\n",sum);
    avg = sum/j;
    printf("Average is = %d",avg);
    return 0;
}