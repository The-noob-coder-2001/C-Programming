#include<stdio.h>
int main()
{
    char str1[10], str2[10];
    int count = 0;
    printf("Enter the string1:\n");
    scanf("%s",str1);  
    printf("Enter the string2:\n");
    scanf("%s",str2);  
    concat(str1, str2);
    printf(" concatenated: %s", str1);
}
void concat(char *s1, char *s2)
{
    int i,j;
    for(i=0;*(s1+i);i++)
        for(j=0;*(s2+j);j++)
            s1[i]=s2[j]
    s1[i]='\0';
}