#include<stdio.h>
#include<conio.h>
int main()
{
int arr[2][2];
int brr[2][2];
int i,j;
//matrix
printf("Enter your first 2*2 matrix");
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
scanf("%d ",&arr[i][j]);
}
}
//transpose
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
brr[j][i]=arr[i][j];
}
}
//result
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d ",brr[i][j]);
}
printf("\n");
}

return(0);
}





