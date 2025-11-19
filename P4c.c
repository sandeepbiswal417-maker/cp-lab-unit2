#include <stdio.h>
int main()
{
    int arr[]={5,1,2,3,4};
    int *ptr=arr;
    printf("%d\t",*ptr);
    ptr++;
    printf("%d\t",*ptr);
    printf("%d\t",*(ptr+2));
   
    return 0;
}
