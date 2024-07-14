#include <iostream>
using namespace std;

int main(){
    int grade1, grade2;
    printf("Please input your score on test 1: ");
    scanf("%d",&grade1);
    printf("Please input your score on test 2: ");
    scanf("%d",&grade2);
    float avg = (grade1+grade2)/2.;
    printf("Average score: %.2f\n",avg);
    printf("Grade: ");
    if(avg >= 90){
        printf("A");
    }
    else if(avg >= 80 && avg <=89){
        printf("B");
    }
    else if(avg >= 70 && avg <=79){
        printf("C");
    }
    else if(avg >= 60 && avg <=69){
        printf("D");
    }
    else{
        printf("F");
    }
    return 0;
}