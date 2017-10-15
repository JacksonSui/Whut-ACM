#include <cstdio>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    char num[14];
    int grade;
    int j = 99;
    while (j--)
    {
        for (int i = 0; i < 13; i++)
            num[i] = '0' + rand() % 10;
        num[13] = '\0';
        grade = rand()%101;
        printf("%s %d\n",num,grade);
    }
    printf("0 0\n");
    return 0;
}