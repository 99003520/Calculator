#include <per.h>


int main()
{
    float a,b; 
    float  percentage;

    /* Input 2 numbers */
    printf("Enter 2 numbers: \n");
    scanf("%f %f", &a,&b);
    /*Read the 2 numbers entered */
    if(a==0 || b==0)
    {
        printf("Both the numbers entered should be greater than 0");
    }
    /*The numbers entered should be greater than 0 else error will be displayed in calculator*/
    else
    {

    /* Calculate percentage */
    /*Formula for percentage is */

    percentage = (a / b )* 100;

    /* Print the result */
    printf("Percentage = %.2f", percentage);
    /* The result is rounded off to 2 decimal places */
    }
    return 0;
}
