/*
Name: Allan kimutai
Reg: PA/106/G/28722/25
programm for transaction 
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    float transaction_amount;
    float total_sales = 0.0;

    file_ptr = fopen("sales.txt", "r");
    if (file_ptr == NULL) {
        printf("Error opening file or file not found.\n");
        return 1;
    }

    while (fscanf(file_ptr, "%f", &transaction_amount) == 1) {
        total_sales += transaction_amount;
    }

    fclose(file_ptr);

    printf("Total sales for the day: %.2f\n", total_sales);

    return 0;
}
