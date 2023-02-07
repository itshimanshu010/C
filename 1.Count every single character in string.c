#include<stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    int i,j,k;
    printf("Enter any String:");
    gets(ch);
    
    int length;
    length = strlen(ch);
    printf("The length of the string is %d", length);

    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='`'){
         continue;
          }
        k=1;
        for(j=i+1;ch[j]!='\0';j++)
        {
            if(ch[i]==ch[j])
            {
                k++;
                ch[j]='`';
            }    
        }
       printf("\n%c are - %d times" ,ch[i],k);
        
    }
return(0);
}
