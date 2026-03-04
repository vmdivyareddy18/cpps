#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The cube of %d is %d\n", number, number * number * number);
    return 0;
}
