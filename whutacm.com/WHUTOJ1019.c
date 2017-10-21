#include <stdio.h>
int main(){
	long long g1,s1,k1,g2,s2,k2;
	long long tot;
	int flag=0;
	long long go,so,ko;
	scanf("%lld.%lld.%lld %lld.%lld.%lld",&g1,&s1,&k1,&g2,&s2,&k2);
	tot=(g2-g1)*17*29+(s2-s1)*29+(k2-k1);
	if(tot<0){
		flag=1;
		tot=-tot;
	}
	go=tot/(17*29);
	so=(tot-go*17*29)/29;
	ko=(tot-go*17*29-so*29);
	if(flag)
		printf("-");
	printf("%lld.%lld.%lld\n",go,so,ko);
}