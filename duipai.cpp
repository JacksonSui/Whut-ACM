#include<cstdio>  
#include<iostream>  
#include<cstdlib>  

using namespace std;  
  
int main()  
{  
    int t = 10;  
    while (t--)  
    {  
        system("data > mi.in");  
        system("test < mi.in > 1.out");  
        system("ac < mi.in > 2.out");  
        if (system("fc 1.out 2.out")) break;  
    }  
    system("pause");  
    return 0;  
}  