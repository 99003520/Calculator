#include <percentage.h>
int main()
{
    float a,b,c; 
    float  sum,percentage;
    float total=300.00;

    /* Input 3 numbers */
    printf("Enter 3 numbers: \n");
    scanf("%f %f %f", &a,&b,&c);
    sum=a+b+c;
    if(sum==0)
    {
      printf("Error the sum of three numbers should be greater than 0");
    }
    else
    {
    /* Calculate percentage */
    /*Formula for percentage is */

    percentage = (sum/total)* 100;

    /* Print the result */
    printf("Percentage of 3 numbers is %.2f", percentage);
    /* The result is rounded off to 2 decimal places */
    }
    

    return 0;
}
