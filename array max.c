#include<stdio.h>
#include<conio.h>
int main()
{

int max[5];
int k;
int largest;
printf("Enter your element:\n");

for(k=0;k<5;k++){
    scanf("%d",&max[k]);
}
largest = max[0];
for(k=0;k<5;k++){
    if(largest<max[k])
    {
        largest=max[k];
    }
}
printf("Largest element is %d",largest);


return(0);
}
