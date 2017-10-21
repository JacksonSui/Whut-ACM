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
	if(b==0)
		return 1;
	if(b==1)
		return (a%m);
	if(b%2)
		return ((a%m)*(poww((a%m),b/2,m)%m)*(poww((a%m),b/2,m)%m))%m;
	else 
		return ((poww((a%m),b/2,m)%m)*(poww((a%m),b/2,m)%m))%m;
}