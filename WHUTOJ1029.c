#include <stdio.h>
typedef long long LL;
LL poww(LL a,LL b,LL m);

int main(){
	LL a,b,m;
	scanf("%lld %lld %lld",&a,&b,&m);
	printf("%lld\n", poww(a,b,m));
	return 0;
}

LL poww(LL a, LL b,LL m){
	LL mt=1;
	while(b){
		if(b%2)
			mt=mt*a%m;
		a=a*a%m;
		b=b/2;
		//printf("%lld\n",mt);
	}
	return mt;
}