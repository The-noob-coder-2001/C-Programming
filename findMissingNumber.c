#include<stdio.h>
int findMissing(int arr[], int n);
int main()
{
   int arr[5];
    printf("Enter the array elements : \n");
    for(int i=0;i<5;i++)
       { 
           scanf("%d", &arr[i]);
       }
    printf("Entered array is : \n");
    for(int i=0;i<5;i++)
       { 
           printf("%d , ", arr[i]);
       }
    
    printf("\nThe missing number in the array is : %d\n", findMissing(arr,5));
    if(findMissing(arr,5)==0)
        printf("No missing number found \n");
}
int findMissing(int arr[], int n)
{
    // logic  : find the sum of the array elements, then substract from the sum of n numbers formula : n*(n+1)/2
   int sum=0;
        int result = n*((n+1)/2);
        for(int i=0;i<=n;i++)
        {
            sum+=arr[i];
        }
        // substract the sum from result
       int final = result-sum;
       if(final>0)
            return final;
        else
            return 0;
}