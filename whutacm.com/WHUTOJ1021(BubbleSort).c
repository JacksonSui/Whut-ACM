#include <stdio.h>
int main(){
	int N,i,j;
	scanf("%d",&N);
	int temp,num[N],flag=N;
	for(int i=0;i<N;i++)
		scanf("%d",&num[i]);
	while(flag){
		i=flag;
		flag=0;
		for(j=1;j<i;j++)
			if(num[j-1]<num[j]){
				temp=num[j];
				num[j]=num[j-1];
				num[j-1]=temp;
				flag=j;
			}
	}
	for(int i=0;i<N;i++)
		printf("%d%c",num[i],(i==N-1)?'\n':' ');
	return 0;
}