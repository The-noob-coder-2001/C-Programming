// WACP to swap two numbers without using 3rd variable

#include<stdio.h> // pre-processor used for including header files
void swap(int a,int b); // function declaration
int main()
{
    int a,b; // input variables
    printf("Enter the values separated by a space....\n");
    scanf("%d %d", &a,&b);
    swap(a,b);    
}
void swap(int a,int b)
{
    printf("Before Swap : %d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swap : %d %d\n",a,b);
}