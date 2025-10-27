/*
Name:Allan kimutai
Reg:PA106/ G/20722/25
Description: programme to calculateFare 
*/
#include <stdio.h>

int calculateFare(int distance) {
    int fare_rate = 50;
    int fare = distance * fare_rate;
    return fare;
}

int main() {
    int distance_traveled = 10;
    int total_fare = calculateFare(distance_traveled);
    printf("The total fare for %d km is KSh. %d\n", distance_traveled, total_fare);
    return 0;
}
