#include <stdio.h>
int main(){
	int n1,n2,sum,temp;
	scanf("%d",&n1);
	while(n1--){
		scanf("%d",&n2);
		sum=0;
		while(n2--){
			scanf("%d",&temp);
			sum+=temp;
		}
		printf("%d\n",sum);
		if(n1)
			putchar('\n');
	}
}