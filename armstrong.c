#include <stdio.h>
int main() {
    int num, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    // originalNum = num;

    while (num != 0) {
       // remainder contains the last digit
        remainder = num % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       num /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
