/*
Name:Allan kimutai
Reg:PA106/G/28722/25
programm Water Bill Calculator
*/



#include <stdio.h>

int main() {
    float units;
    float totalBill;

    // 1. Prompts the user to enter the number of water units consumed.
    printf("Enter the number of water units consumed: ");
    scanf("%f", &units);

    // 2. Uses if-else if-else statements to calculate the total bill.
    if (units >= 0 && units <= 30) {
        totalBill = units * 20; // 0-30 units -> 20 KES per unit
    } else if (units > 30 && units <= 60) {
        totalBill = (30 * 20) + ((units - 30) * 25); // First 30 units at 20 KES, remaining at 25 KES
    } else { // units > 60
        totalBill = (30 * 20) + (30 * 25) + ((units - 60) * 30); // First 30 at 20, next 30 at 25, rest at 30 KES
    }

    // 3. Displays the total bill in KES with two decimal places.
    printf("Total bill: %.2f KES\n", totalBill);

    return 0;

}
