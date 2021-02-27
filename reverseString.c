#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10], temp;
    int count = 0;
    int i=0,j=0;
    printf("Enter the string:\n");
    // gets(str1);
    scanf("%s",str1);
                for(int a=0;str1[a]!='\0';++a)
                {
                    count++;
                }
     j=count-1;
    // j=strlen(str1)-1;
    while (i<j)
    {
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
        i++;j--;
    }
    printf("Reverse string: %s",str1);
    
}
