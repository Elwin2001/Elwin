//Average of three number

#include <stdio.h>

int main()
{
    int integer1,integer2,integer3;
    float average;
    
    
    printf("Enter the integer1 value");
    scanf("%d", &integer1);
    printf("Enter the integer2 value");
    scanf("%d", &integer2);
    printf("Enter the integer3 value");
    scanf("%d", &integer3);
    
    average = (integer1 + integer2 + integer3) / 3;
    
    printf("The value of float %f",average);
    
    
}
