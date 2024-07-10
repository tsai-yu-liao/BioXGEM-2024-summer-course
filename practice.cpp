#include <iostream>
using namespace std;

int main(){
    char name[11];
    char department;
    int test1;
    int test2;
    printf("Please input your name.... ");
    scanf("%s",&name);
    cin.ignore();//or getchar()
    printf("Please select your department....(a:CS b:Bio c:Math) ");
    scanf("%c",&department);
    printf("Please input your score on test 1.... ");
    scanf("%d",&test1);
    printf("Please input your score on test 2.... ");
    scanf("%d",&test2);
    float avg = (float(test1) + float(test2)) / 2;
    printf("\n+---------------------+----------+------+------+-------+\n");
    printf("|        Name         |Department|Test 1|Test 2|Average|\n");
    printf("+---------------------+----------+------+------+-------+\n");
    printf("|%-21s|%10c|%6d|%6d|%7.2f|\n",name,department,test1,test2,avg);
    printf("+---------------------+----------+------+------+-------+\n");
    return 0;
}