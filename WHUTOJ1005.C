#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int length,tIndex;
	char str[1005],tstr[1005];
	while(scanf("%s",str)!=EOF){
		memset(tstr,0,sizeof(tstr));
		tIndex='\0';
		length=strlen(str);
		for(int i=length-1;(i+1);i--,tIndex++)
			tstr[tIndex]=str[i];
		tstr[tIndex]='\0';
		//puts(str);
		//puts(tstr);
		if(!strcmp(str,tstr))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}