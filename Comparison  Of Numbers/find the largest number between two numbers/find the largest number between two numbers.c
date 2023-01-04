#include <stdio.h>
/* main function */
int main()
{
    /* two variable declarations to store numbers taken from the user */
    int value_one, value_two;

    /* Input First value */
    printf("Enter First Value: ");
    scanf("%d",&value_one);

    /* Input Second Value */
    printf("Enter Second Value: ");
    scanf("%d",&value_two);

    /* Check which is largest Number and which is smallest number*/
    if(value_one > value_two)
    {
        printf("The largest number is: %d", value_one);
        printf("\nThe smallest number is: %d", value_two);
    }
    /* Check if Two Numbers are equal */
    else if (value_one == value_two)
    {
        printf("Numbers is equal");

    }
    else
    {
        printf("The largest number is: %d", value_two);
        printf("\nThe smallest number is: %d", value_one);
    }
    return 0;
}

