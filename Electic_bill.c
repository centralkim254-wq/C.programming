/*
Name:Allan kimutai 
Reg no:PA106/G/28722/25
Description:c program to calculate electric bill
*/

#include<stdio.h>

float calculateElectricbill(int units) {
        float bill;
        
        if (units<=100){
           bill=units *10;
        }else if(units<=200){
           bill=100*10+(units-100)*15;
        }else{
           bill=100*10+100*15+(units-200)*20;
        }  
        return bill;
        
}        

int main(){
     int units;
     printf("Enter units consumed:");
     scanf("%d",&units);
     
     printf("Total bill=KSH. %.2f\n",calculateElectricbill(units));
     return 0;
}   
     
     

             
                            

     
