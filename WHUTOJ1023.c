#include <stdio.h>
int fib(int n){
	if(n==1||n==2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}

int fac(int n){
	if(n==1)
		return 1;
	return n*fac(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",fib(n)+fac(n));
}