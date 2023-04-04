#include<stdio.h>
#include<conio.h>
int main()
{


int max[5];
int k;
int smallest;
printf("Enter your element:\n");

for(k=0;k<5;k++){
    scanf("%d",&max[k]);
}
smallest= max[0];
for(k=0;k<5;k++){
    if(smallest>max[k])
    {
        smallest=max[k];
    }
}
printf("Smallest element is %d",smallest);


return(0);
}
