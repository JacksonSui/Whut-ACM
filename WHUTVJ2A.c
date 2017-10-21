#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	long num,bit;
	char inp[12];
	char *p = inp;
	scanf("%ld",&num);
	sprintf(inp,"%ld",num);
	bit = strlen(inp);
	if(num<0)
		putchar('-');
	for(p=p+bit-1;*p=='0';p--);
	for(;isdigit(*p);p--)
		putchar(*p);
	putchar('\n');
}