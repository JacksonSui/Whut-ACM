#include <stdio.h>
#include <string.h>
int main(){
	int f1,f2;
	char a[1000],b[1000];
	while(scanf("%s %s",a,b)!=EOF){
		f1=(strstr(a,b)!=NULL);
		f2=(strstr(b,a)!=NULL);
		if(f1&f2)
			printf("Congratulations!\n");
		else if(f1)
			printf("%s%s\n",b,a);
		else if(f2)
			printf("%s%s\n",a,b);
		else
			printf("NO\n");
	}
}