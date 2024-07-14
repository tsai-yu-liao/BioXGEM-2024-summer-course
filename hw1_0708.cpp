#include <iostream>
using namespace std;

int main(){
    int tot_sec;
    printf("Please input total seconds: ");
    scanf("%d",&tot_sec);
    int hr = tot_sec/60/60;
    int min = tot_sec/60%60;
    int sec = tot_sec%60;
    printf("%d hour %d minute %d second",hr,min,sec);
    return 0;
}