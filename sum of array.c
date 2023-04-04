#include<stdio.h>
#include<conio.h>
int main()
{
int arr[5];
int i;
int sum=0;
printf("Enter your elements :\n");
for(i=0;i<5;i++)
{
    scanf("%d "&arr[i]);
    sum=sum+arr[i];
}

printf("\nSum of elements of array", sum);
return(0);
}
