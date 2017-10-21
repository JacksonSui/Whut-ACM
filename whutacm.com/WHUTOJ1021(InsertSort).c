#include <stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int temp,num[N];
	for(int i=0;i<N;i++)
		scanf("%d",&num[i]);
	for(int i=1;i<N;i++)
		for(int j=i-1;j>=0&&num[j]<num[j+1];j--){
			temp=num[j];
			num[j]=num[j+1];
			num[j+1]=temp;
		}
	for(int i=0;i<N;i++)
		printf("%d%c",num[i],(i==N-1)?'\n':' ');
	return 0;
}