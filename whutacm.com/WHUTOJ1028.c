#include <stdio.h>
#include <math.h>
#define eps 1e-5
#define les 1e-10
#define pi acos(-1)
double f(double R,double h);

int main(){
	double R,r,h=0;
	scanf("%lf %lf",&R,&r);
	double begin=0,end=R;
	//printf("%lf %lf\n",R*100000,r);
	while((end-begin)>eps){
		h=(end+begin)/2;
		//printf("%lf %lf\n",h,f(R,h));
		if(f(R,h)>r)
			end=h;
		else if(fabs(f(R,h)-r)<les)
			break;
		else
			begin=h;
	}
	printf("%.4lf",h);
}

double f(double R, double h){
	return (R*R*acos(1-h/R)-(R-h)*sqrt(R*R-(R-h)*(R-h)))/(pi*R*R/2);
}