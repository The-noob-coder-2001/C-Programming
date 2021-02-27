//WACP to print the copied string from entered string without using any predefined functions
#include<stdio.h>
int main(){
    char str1[10], str1cpy[10],i;
    printf("Enter the string:\n");
    scanf("%s",str1);
    for(int i=0;str1[i]!='\0';++i)
    {
        str1cpy[i]=str1[i];
    }
  str1cpy[i] = '/0';
    //new array which copied from previous array:
    printf("new string copied: %s ", str1cpy);
}