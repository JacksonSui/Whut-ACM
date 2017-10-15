#include<stdio.h>
#include<string.h>
int main(){
	int n,days,num[30];
	for(int i=1;i<30;i++){
		num[i]=1;	
		for(int j=1;j<i;j++){
			num[i]=(num[i]+1)*2;
		}
	}
	while(scanf("%d",&days)!=EOF){
		printf("%d\n",num[days]);
	}
}