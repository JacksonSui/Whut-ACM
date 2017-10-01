#include <stdio.h>
#include <string.h>
#define maan 25000000
#define cube(a) (a*a*a)
short hash[maan+10];


int main(){
	int a1,a2,a3,a4,a5;
	int x1,x2,x3,x4,x5;
	int sum, sol=0;
	scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
	memset(hash,0,sizeof(hash));
	for(int x1=-50;x1<=50;x1++){
		if(!x1)
			continue;
		for(int x2=-50;x2<=50;x2++){
			if(!x2)
				continue;
			sum = -1* (a1*cube(x1)+a2*cube(x2));
			if(sum<0)
				sum+=25000000;
			hash[sum]++;
		}
	}
	for(int x3=-50;x3<=50;x3++){
		if(!x3)
			continue;
		for(int x4=-50;x4<=50;x4++){
			if(!x4)
				continue;
			for(int x5=-50;x5<=50;x5++){
				if(!x5)
					continue;
				sum = a3*cube(x3)+a4*cube(x4)+a5*cube(x5);
				if(sum<0)
					sum+=25000000;
				sol+=hash[sum];
			}
		}
	}
	printf("%d\n",sol);
}