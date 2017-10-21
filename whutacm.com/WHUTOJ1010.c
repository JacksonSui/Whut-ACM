#include <stdio.h>
int main(){
	int N,temp;
	double m,sum;
	scanf("%d",&N);
	while(N--){
		sum=0;
		scanf("%d",&temp);
		for(int i=2;i<=temp;i++)
			sum+=(1.0/i)*(1.0/i);
		printf("%.6lf\n",sum);
	}
}