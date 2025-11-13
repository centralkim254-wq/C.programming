/*
Name: Allan kimutai
Reg: PA/106/G/28722/25
programm for student info,records,names and marks of each student
*/  
#include <stdio.h>

struct Student {
    char name[50];
    int reg_no;
    float marks;
};

int main() {
    struct Student s;
    FILE *file;

    // Open the file in binary read mode
    file = fopen("results.dat", "rb");

    if (file == NULL) {
        printf("Error opening file or file does not exist.\\n");
        // Optionally, you could write some dummy data to the file here for testing.
        return 1;
    }

    printf("Student Records:\\n");
    printf("Name\\t\\tMarks\\n");
    printf("---------------------\\n");

    // Read and display records
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("%s\\t\\t%.2f\\n", s.name, s.marks);
    }

    // Close the file
    fclose(file);

    return 0;
}
