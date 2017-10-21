#include <stdio.h>
#include <math.h>
#define EPS 1e-8
#define pi acos(-1.0)

int main(){
	double a,b,c,a1,a2,a3,amax;
	while(scanf("%lf%lf%lf",&a,&b,&c)&&(a||b||c)){
		a1=acos((b*b+c*c-a*a)/(2*b*c));
		a2=acos((a*a+c*c-b*b)/(2*a*c));
		a3=acos((a*a+b*b-c*c)/(2*a*b));
		amax=a1>a2?(a1>a3?a1:a3):(a2>a3?a2:a3);
		printf("%.2lf\n",((amax+EPS)*180)/pi+EPS);
	}
}
