//Print asci value of user entered value 

#include <stdio.h>

int main()
{
    char value;
    printf("Enter the value ");
    scanf("%c",&value);
    printf("The ASCI value of %c is : %d",value,value);
    return 0;
}
