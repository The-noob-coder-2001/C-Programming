#include<stdio.h>
#include<string.h>
void printSubString(char *str, int start, int end);
int main()
{
    char str[10];
    int start, end;
    printf("enter the string : \n");
    scanf("%s", &str);
    printf("enter start value : \n"); scanf("%d", &start);
    printf("enter end value : \n"); scanf("%d", &end);
    printSubString(str,start,end);
}
void printSubString(char *str, int start, int end)
{
    // not workingL:
    char newstr[10];
    int i,j;
    for(int i=0;str[i]!='\0';i++);
    
        for(int j=start-1;j<=end+1;j++)
            {
                str[j]=newstr[j];
            }
    
    printf("sub-string : %s", newstr);
}