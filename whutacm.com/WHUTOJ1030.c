#include <stdio.h>
#define MAX 1000000

int main(){
	int t;
	double temp=0,ans[MAX];
	for(int i=0;i<MAX;i++){
		temp+=(1/(i+1.0))*(1/(i+1.0));
		ans[i]=temp;
	}
	while(scanf("%d",&t)!=EOF){
		if(t==0)
			printf("0.00000\n");
		else
			printf("%.5lf\n",ans[t-1]);
	}
	return 0;
}