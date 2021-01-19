//WACP to print the format using loop :  01 0101 010101 01010101 0101010101 010101010101

#include<stdio.h>
int main()
{
   for (int i=1; i<=6; ++i) 
   {
      for (int j=1; j<=i; ++j) 
      {
         printf("01");
      }
      printf("\n");
     
    }
}