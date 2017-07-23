#include <stdio.h>
#include <math.h>
#define EPS 1e-8

int main() {
	double a, b, c;
	double delta, s1, s2, k;
	while (scanf("%lf%lf%lf", &a, &b, &c) && (a || b || c)) {
		if (a == 0) {
			s1 = -c / b;
			if(fabs(s1)<EPS)
				printf("0.00\n");
			else
				printf("%.2lf\n", s1);
		}
		else {
			delta = b*b - 4 * a*c;
			if (fabs(delta) < EPS) {
				s1 = 0.5*(-b) / a;
				if (fabs(s1) <= EPS)
					s1 = 0;
				printf("%.2lf\n", s1);
			}
			else if (delta > 0) {
				s1 = 0.5*((-b) + sqrt(delta)) / a;
				s2 = 0.5*((-b) - sqrt(delta)) / a;
				if (fabs(s1) <= EPS)
					s1 = 0;
				if (fabs(s2) <= EPS)
					s2 = 0;
				printf("%.2lf %.2lf\n", s1, s2);
			}

			else {
				k = 0.5*sqrt(-delta) / a;
				s1 = 0.5*(-b) / a;
				if(fabs(k)-0.01<EPS&&fabs(s1-0.01<EPS))
					printf("0.00\n");
				else if(fabs(k)<EPS)
					printf("0.00\n");
				else if(fabs(k)-0.01<EPS)
					printf("%.2lf\n",s1);
				else if (fabs(s1) < 0.01)
					printf("%.2lfi -%.2lfi\n", k, k);
				else
					printf("%.2lf+%.2lfi %.2lf-%.2lfi\n", s1, k, s1, k);

			}
		}
	}
}