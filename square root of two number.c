/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float num, square;
    printf("Please enter any integer value: ");
    scanf("%f", &num);
    square = num * num;
    printf("The Square of the given number %.2f is %.2f", num, square);
    return 0;
}