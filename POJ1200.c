#include <stdio.h>
#include <string.h>
#define maxn 16000000

char str[maxn+5];
char ind[300];
int hash[maxn+5];

int main(){
	int N, NC;
	int num=0;
	scanf("%d%d",&N,&NC);
	scanf("%s",str);
	int len = strlen(str);
	memset(ind, 0, sizeof(ind));
	memset(hash, 0, sizeof(hash));
	for(int i=0; i<len; i++){
		if(!ind[str[i]])
			ind[str[i]] = ++num;//找到每个字母第一次出现的位置
	}
	int cnt=0;
	int sum;
	for(int i=0; i<len-N+1; i++){
		sum=0;
		for(int j=i; j<i+N; j++)
			sum += (sum*NC + ind[str[j]]);//将子串转换为NC进制数
		if(!hash[sum]){
			cnt++;
			hash[sum]++;
		}
	}
	printf("%d\n",cnt);
}