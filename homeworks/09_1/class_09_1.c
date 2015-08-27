#include <stdio.h>

main(){

double number;
double expo;
int counter = 1;

printf("Please enter your number:\n");
scanf("%lf",&number);
expo = number;
while(counter <= 25){
    printf("%lf\n",expo);
    expo = number * expo;
    counter++;
    }
}