//WACP to find the sum of digits using recursion

#include<stdio.h>
int findSum(int num);
int main()
{
    int n; // user-enetered number
    printf("enter the number: \n");
    scanf("%d", &n);
   printf("Sum of digits : %d\n",  findSum(n));
}
int findSum(int num)
{
    int rem,sum;
   
      /*
      Brute-force approach made on notepad:
      step1: we need to find he remainder of the number such that we get its one's place digit.
      step2: we need to add it to a sum variable such that after every iteration, the valu egets updated
      step3: we need to divide the number by 10, so that we can eliminate the digits at its one's place
      */
     rem=num%10;      printf("rem : %d\n", rem);
     sum=sum+rem;     printf("rem : %d\n", sum);
    //  num=num/10;
    
    // recursion used here below:
    if(num)
    {
    return (rem+findSum(num/10));
    }
    else{
        return 0;
    }
   
   // return sum;
  
}