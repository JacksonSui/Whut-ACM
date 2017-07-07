#include <stdio.h>
int main(){
	int N,ss;
	double p,q;
	scanf("%d",&N);
	while(N--){
		scanf("%lf%lf",&p,&q);
		for(ss=0;;ss++){
			if((int)(ss*q/100)-(int)(ss*p/100)){
				printf("%d\n",ss);
				break;
			}
		}
	}
}