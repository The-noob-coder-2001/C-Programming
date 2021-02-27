#include<stdio.h>
#include<string.h>
void printSubString(char *str, int start, int end);
int main()
{
    char s[10];
    printf("enter the password : \n");
    scanf("%s", &s);
    if(strlen(s)==8)
        printf("password strength : 20%");
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
            printf("password strength : 40%");
    }
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'||s[i]<='Z')
            printf("password strength : 60%");
    }
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'||s[i]<='z')
            printf("password strength : 80%");
    }
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=0&&s[i]<=21)
            printf("password strength : 100%");
    }
    


    return 0;
}