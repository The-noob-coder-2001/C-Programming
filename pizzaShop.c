// application of Switch-Case in C
#include<stdio.h>
int main()
{
    int foodItemNumber;
    printf("Enter Food item number : \n");
    scanf("%d", &foodItemNumber);
    switch (foodItemNumber)
    {
    case 1:
        printf("Food item - Pizza \n Price - Rs 179");
        break;
    case 2:
        printf("Food item - Pasta \n Price - Rs 179");
        break;
    case 3:
        printf("Food item - Burger \n Price - Rs 129");
        break;
    case 4:
        printf("Food item - Sandwich \n Price - Rs 149");
        break;
    case 5:
        printf("Food item - French Fries \n Price - Rs 99");
        break;
    default:
        break;
    }
}