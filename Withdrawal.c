/*
Name:Allan kimutai
Reg:PA106/ G/28722/25
Description :withdrawal  from atm 
*/
#include <stdio.h>

int main() {
    float balance, withdraw;
    
    printf("Enter initial balance: ");
    scanf("%f", &balance);
    
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);
        
        balance = withdraw;
        printf("Remaining balance: %.2f\n", balance);
        
        if(balance <= 0) {
           printf("Insufficient balance. Transaction stopped.\n");
        }
    }  
    return 0;
}     
