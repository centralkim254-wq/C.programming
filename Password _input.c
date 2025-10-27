/*
Name:Allan kimutai
Reg:PA106/G/28722
Description: password  input
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password [20];
    
    do{
       printf("Enter password: ");
       scanf("%s", password);
    }while (strcmp(password, "1234") !=0);
    
    printf("Access Granted\n"); 
    return 0;
}     
