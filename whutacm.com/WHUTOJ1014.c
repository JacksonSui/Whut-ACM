#include <stdio.h>
int main( )
{  
	double point;
   	double cost=0;
   	scanf("%lf",&point);
   	if(point<=180)  
		cost=point*0.573;
    else if (point<=400)
    	cost=180*0.573+(point-180)*0.623;
	else 
		cost=180*0.573+220*0.623+(point-400)*0.873;
  	printf("%.2lf\n",cost);
  }
