#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct{
	char str[62];
	int times;
}Match;

bool compare(const Match& a, const Match& b){
	return a.times>b.times;
}

int main(){
	int n;
	scanf("%d",&n);
	char text[1000002];
	Match match[n];
	for(int i=0;i<n;i++){
		scanf("%s",match[i].str);
		match[i].times=0;
	}
	scanf("%s",text);
	for(int i=0;i<n;i++){
		char *res = text;
		while((res=strstr(res,match[i].str))!=NULL){
			match[i].times++;
			res++;
		}
	}
	sort(match,match+n-1,compare);
	printf("%d\n",match[0].times);
	for(int i=0;i<n;i++){
		if(match[i].times==match[0].times)
			printf("%s\n",match[i].str);
	}
	return 0;
}