#include<stdio.h>
int a(int m, int n)
{
    if (m==0)
    {
        return n+1;
    }

    if(m>0 && n==0)
    {
        return a(m-1,1);
    }

    if (m>0 && n>0)
    {
        return a(m-1,a(m,n-1));
    }
    
}

int main()
{
    int m,n;
    printf("Enter the value of m : ");
    scanf("%d",xx&m);

    printf("\n Enter the value of n :");
    scanf("%d",&n);

    printf("value=%d",a(m,n));

    return(0);
}
