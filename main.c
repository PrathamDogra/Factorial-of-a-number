#include <stdio.h>
#include <stdlib.h>

int fact(int num)
{
    int res;
    if(num==1 || num==0)
        return 1;
    else
        res=num *fact(num-1);
    return res;
}

int main()
{
   int i,n;
    char ch;
    do
    {
   printf("enter the number: ");
   scanf("%d",&n);

   i=fact(n);
    printf("\nThe Factorial of the number is:");
   printf("%d",i);
   printf("\nWant to use it again");
    scanf("%c",&ch);
    }while(ch=='y'||ch=='Y')


    return 0;
}
