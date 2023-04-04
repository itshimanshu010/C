#include<stdio.h>
#include<conio.h>
int main()
{
int arr[2][2];
int brr[2][2];
sum[2][2];
int i,j;

//matrix1
printf("Enter your first 2*2 matrix");
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
scanf("%d ",&arr[i][j]);
}
}

//matrix1
printf("Enter your second 2*2 matrix");
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
scanf("%d ",&brr[i][j]);
}
}

//result
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
    sum[i][j]=arr[i][j]+brr[i][j];
    printf("%d ",sum[i][j]);
}
printf("\n");
}

return(0);
}
