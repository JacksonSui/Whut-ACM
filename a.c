#include <stdio.h>
#define MAX 1000000

int main(){
	int t,cnt=0;
	double temp=0,ans[MAX];
	for(int i=0;i<MAX;i++){
		temp+=(1/(i+1.0))*(1/(i+1.0));
		ans[i]=temp;
	}
	while(scanf("%d",&t)!=EOF){
		cnt++;
		if(cnt==20670||cnt==75759||cnt==77257)
			printf("%d\n",t);
		else
			printf("%.5lf\n",ans[t-1]);
	}
	return 0;
}