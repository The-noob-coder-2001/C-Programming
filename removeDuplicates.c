#include<stdio.h>
#include<string.h>
void removeDuplicates(char *str);
int main()
{
    char str[10];
    printf("enter the string : \n");
    scanf("%s", &str);

    removeDuplicates(str);
}
void removeDuplicates(char *str)
{
    for(int i=0;i<strlen(str);i++)
    {
        for(int j=i+1;str[j]!='\0';j++)
        {
            if(str[j]==str[i])
            {
                for(int k=j;str[k]!='\0';k++)
                {
                    str[k]=str[k+1];
                }
            }
        }
    }
    printf("Final string after removing the duplixcates is : %s", str);
}