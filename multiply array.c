#include<stdio.h>
#include<conio.h>
int main()
{
int arr[2][2];
int brr[2][2];
mul[2][2];
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

//matrix2
printf("Enter your second 2*2 matrix");
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
scanf("%d ",&brr[i][j]);
}
}

//multiply

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
    mul[i][j]=0;
        for(int k=0;k<2;k++)
       {
         mul[i][j]+=arr[i][k]*brr[k][j];
       }
}
}

//result
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
printf("%d \t",mul[i][j]);
}
printf("\n");
}



return(0);
}
