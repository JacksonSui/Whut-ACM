#include <stdio.h>
#include <string.h>
int main(){
	int N,num,score,maxn;
	scanf("%d",&N);
	int group[N];
	memset(group,0,sizeof(group));
	for(int i=0;i<N;i++){
		scanf("%d %d",&num,&score);
		group[num-1]+=score;
	}
	maxn=0;
	for(int i=1;i<N;i++)
		if(group[i]>group[maxn])
			maxn=i;
	printf("%d %d",maxn+1,group[maxn]);
}