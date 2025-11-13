/*
Name: Allan kimutai
Reg: PA/106/G/28722/25
programm for entering  book titles
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char title[100]; // Buffer to store the book title

    // Open the file in append mode ("a")
    fp = fopen("borrowed_books.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if file cannot be opened
    }

    printf("Enter the title of the borrowed book: ");
    // Use fgets to read the title, including spaces, up to 99 characters
    fgets(title, 100, stdin);

    // Write the title to the file
    fprintf(fp, "%s", title);

    // Close the file
    fclose(fp);

    // Display confirmation message
    printf("Confirmation: Title successfully stored in borrowed_books.txt.\n");

    return 0;
}
