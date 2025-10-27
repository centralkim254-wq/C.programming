/*
Name: Allan  kimutai
Reg:PA106/G/28722/25
Programm of mobile data purchase
*/
#include <stdio.h>

int main() {
    int choice;

    // Display the menu
    printf("Mobile Data Bundle Options:\n");
    printf("Option\tBundle\t\tCost (KES)\n");
    printf("1\t100 MB\t\t50\n");
    printf("2\t500 MB\t\t200\n");
    printf("3\t1 GB\t\t350\n");
    printf("4\t2 GB\t\t600\n");

    // Ask the user to enter their choice
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Use a switch statement to display the selected bundle and its cost
    switch (choice) {
        case 1:
            printf("Selected: 100 MB Bundle, Cost: KES 50\n");
            break;
        case 2:
            printf("Selected: 500 MB Bundle, Cost: KES 200\n");
            break;
        case 3:
            printf("Selected: 1 GB Bundle, Cost: KES 350\n");
            break;
        case 4:
            printf("Selected: 2 GB Bundle, Cost: KES 600\n");
            break;
        default:
            printf("Invalid choice. Please select an option between 1 and 4.\n");
            break;
    }

    return 0;

}
