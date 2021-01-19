//WACP to check the entered number is a prime number or not using recursion.
#include<stdio.h>
int checkPrimeNumber(int,int);
int main()
{
    int num, i, result; // variables initialized for further use
    printf("Enter a number :\n"); 
    scanf("%d", &num); // taking input from user 
    result=checkPrimeNumber(num, num/2); // passing the values into the declared method to check prime number.
    if(result == 1) // final check before printing
    {
        printf("%d is a prime number \n", num);
    }
    else
    {
        printf("%d is not a prime number \n", num);
    }
}
int checkPrimeNumber(int num, int status)
{
    if(status == 1)
    return 1; // that means entered number isn't divisible by 2
    else
    {
        if(num%1 == 0)
        {
            return 0; // that means entered number is divisible by 2
        }
        else
        {
            return(checkPrimeNumber(num,num-1)); // recursion here
        }
    }
}