//WACP to print the length of the string entered without using any predefined functions
#include<stdio.h>
int main(){
    char str1[10];
    int count = 0;
    printf("Enter the string:\n");
    scanf("%s",str1);
    for(int i=0;str1[i]!='\0';++i)
    {
       count++;
    }
    printf("length of string: %d", count);
}