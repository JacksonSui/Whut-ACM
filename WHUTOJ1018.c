#include <stdio.h>

int main(){
	int n,num,dv,fig[25];
	char sym;
	fig[0]=1;
	for(int i=1;i<25;i++)
		fig[i]=2*i*i+4*i+1;
	scanf("%d %c",&num,&sym);
	for(int i=0;i<25;i++){
		if(num<fig[i]){
			n=i;
			dv=num-fig[i-1];
			break;
		}
	}
	for(int i=n-1;i;i--){
		for(int j=0;j<(n-i-1);j++)
			putchar(' ');
		for(int k=0;k<(2*i+1);k++)
			putchar(sym);
		putchar('\n');
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<(n-i-1);j++)
			putchar(' ');
		for(int k=0;k<(2*i+1);k++)
			putchar(sym);
		putchar('\n');
	}
	printf("%d\n",dv);
}