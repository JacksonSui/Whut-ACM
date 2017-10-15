#include<stdio.h>
#include<math.h>
typedef long long LL;
int main(){
	LL n,m,a,sol;
	double h,v;
	scanf("%lld%lld%lld",&n,&m,&a);
	h=n*1.0/a;
	v=m*1.0/a;
	sol = ceil(h)*ceil(v);
	printf("%lld\n",(sol)?sol:1);
}