#include <stdio.h>

int main() {
    int arr[5];
    int base,k;
    int w=4;
   
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the element position to find address: ");
    scanf("%d",&k);
    arr[5]=base + (w*k);
    printf("%d",arr[5]);
    

    return 0;
}
