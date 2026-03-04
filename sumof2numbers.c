#include <stdio.h>
int main()
{
    int x = 0, y = 0, sum = 0;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    sum = x + y;
    printf("The sum of %d and %d is %d\n", x, y, sum);
    return 0;
}
