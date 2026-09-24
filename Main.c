/*
 Name: Peter Thuo
 Reg Number: CT100/G/30622/26
 Description: Program to input height, bank balance and phone number
 Date: 24/9/2026
*/

#include <stdio.h>

int main()
{
    float height;
    double balance;
    char phone[20];

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your bank balance in KSh: ");
    scanf("%lf", &balance);

    printf("Enter your phone number: ");
    scanf("%s", phone);

    printf("\nYour Details:\n");
    printf("Height = %.2f\n", height);
    printf("Bank Balance = %.2f KSh\n", balance);
    printf("Phone Number = %s\n", phone);

    return 0;
}
