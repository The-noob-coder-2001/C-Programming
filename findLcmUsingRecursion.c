//WACP to find the lcm of 2 numbers using recursion.
#include <stdio.h>
/* Function declaration */
int lcm(int a, int b);
int main()
{
    int num1, num2, LCM;
    /* Input two numbers from user */
    printf("Enter any two numbers to find lcm: ");
    scanf("%d%d", &num1, &num2);
    if(num1 > num2)     // condition which checks that first parameter of LCM function is always less than second 
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);
        
    printf("LCM of %d and %d = %d", num1, num2, LCM);
   
}


/**
 * Recursive function to find lcm of two numbers 'a' and 'b'.
 * Here 'a' needs to be always less than 'b'.
 */
int lcm(int a, int b)
{
    static int multiple = 0;
    multiple += b; // Increments multiple by adding max value to it 
    if((multiple % a == 0) && (multiple % b == 0)) //  Base condition of recursion : If found a common multiple then return that multiple.
    {
        return multiple;
    }
    else 
    {
        return lcm(a, b);
    }
}