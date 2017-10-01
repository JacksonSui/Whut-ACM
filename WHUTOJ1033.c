#include <stdio.h>

int GYS(int m, int n){
	while(m!=n){
		if(m>n)
			m-=n;
		else
			n-=m;
	}
	return m; 
}

int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF)
		printf("%d %d\n",GYS(m,n),m*n/GYS(m,n));
	return 0;
}