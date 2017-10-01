//做不出来 看了题解写的。。

#include <stdio.h>
#include <string.h>
#define MODNUM 1000000007

int main(){
	int tot=0;
	char pat[100005];
	scanf("%s",pat);
	int n=strlen(pat);
	int rt=0,lp[n];
	lp[0]=0;
	for(int i=0;i<n;i++){
		if(i)
			lp[i]=lp[i-1];
		if(pat[i]=='P')
			lp[i]++;
	}
	for(int i=n-1;i>=0;i--){
		if(pat[i]=='T')
			rt++;
		if(pat[i]=='A')
			tot=(tot+rt*lp[i])%MODNUM;
	}
	printf("%d\n",tot);
	return 0;
}