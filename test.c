#include <stdio.h>
#include <math.h>
#define EPS 1e-8

int main() {
	int n;
	double a, b, c;
	double delta, s1, s2, k;
	scanf("%d",&n);
	while (n--) {
		scanf("%lf%lf%lf", &a, &b, &c);
		if (a == 0) {
			s1 = -c / b;
			if(fabs(s1)<EPS)
				printf("0.0\n");
			else
				printf("%.1lf\n", s1);
		}
		else {
			delta = b*b - 4 * a*c;
			if (fabs(delta) < EPS) {
				s1 = 0.5*(-b) / a;
				if (fabs(s1) <= EPS)
					s1 = 0;
				printf("%.1lf\n", s1);
			}
			else if (delta > 0) {
				s1 = 0.5*((-b) + sqrt(delta)) / a;
				s2 = 0.5*((-b) - sqrt(delta)) / a;
				if (fabs(s1) <= EPS)
					s1 = 0;
				if (fabs(s2) <= EPS)
					s2 = 0;
				printf("%.1lf %.1lf\n",(s1>s2)?s1:s2,(s1<s2)?s1:s2);
			}

			else {
				printf("无解\n");
			}
		}
	}
}