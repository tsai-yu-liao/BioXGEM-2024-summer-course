#include <iostream>
using namespace std;

int main(){
    int year;
    printf("Please input a year: ");
    scanf("%d",&year);
    if(year%400 ==0 || (year%4==0 && year%100!= 0)){
        printf("%d is a leap year.",year);
    }
    else if(year%4 != 0 ||(year%100 ==0 &&year%400 != 0)){
        printf("%d is not a lear year.");
    }
    return 0;
}