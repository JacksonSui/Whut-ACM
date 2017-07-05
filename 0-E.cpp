#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int etoi(char *str){
	char num[10][6]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	for(int i=0;i<10;i++)
		if(!strcmp(str,num[i]))
			return i;
}

int geti(char *str){
	char *s1,*s2;
	s1=strtok(str," ");
	s2=strtok(NULL," ");
	if(s2==NULL)
		return etoi(s1);
	else
		return (10*etoi(s1)+etoi(s2));
}

int main(int argc, char const *argv[])
{
	char s[50],*str1,*str2;
	int n1,n2;
	do{
		cin.getline(s,50,'=');
		getchar();
		for(int i=0;i<50;i++){
			if(s[i]=='+'){
				s[i-1]=s[i+1]='+';
				break;
			}
		}
		str1=strtok(s,"+");
		str2=strtok(NULL,"+");
		n1=geti(str1);
		n2=geti(str2);
		if(n1||n2)
			printf("%d\n",n1+n2);
	}while(n1||n2);
	return 0;
}