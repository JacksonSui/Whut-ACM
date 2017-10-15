#include<stdio.h>
#include<math.h>
int main(){
	int m,n,sol,sum=0;
	while(scanf("%d%d",&m,&n)!=EOF){
		sol=0;
		for(int i=m;i<=n;i++){
			sum=pow(i/100,3)+pow((i/10)%10,3)+pow((i%100)%10,3);
			//printf("%d",sum);
			if(i==sum){
				if(sol)
					printf(" ");
				printf("%d",i);
				sol++;
			}
		}
		if(!sol)
			printf("no\n");
		else
			printf("\n");
	}
}