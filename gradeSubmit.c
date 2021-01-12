//WACP to print the asserted Grade using user-inputed mark.

#include<stdio.h> 
int main()
{
    double studentMarks;
    printf("Enter the marks of Student: \n");
    scanf("%lf",&studentMarks);

    //decision-making using if-Else
    if(studentMarks>85 && studentMarks<=100)
            printf("Grade A");
    else if(studentMarks>70 && studentMarks<=84)
            printf("Grade B");
    else if(studentMarks>55 && studentMarks<=69)
            printf("Grade C");
    else if(studentMarks>40 && studentMarks<=54)
            printf("Grade D");
    else
    {
        printf("Grade F");
    }
    
}