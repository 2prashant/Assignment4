//10. Write a program to print a table of 5
#include<stdio.h>
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("print table of 5:\n");
    for(int i=1;i<=num;i++)
    {
        
            printf("%d ",5*i);
    }
    return 0;
}