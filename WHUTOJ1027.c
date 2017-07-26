#include <cstdio>
#include <algorithm>
using namespace std;
bool c(int a,int b){
	return a<b;
}

int main(){
	int s,N,p,mid,maxa,temp,maxn=0;
	int last=0;
	scanf("%d %d",&N,&p);
	int num[N];
	for(int i=0;i<N;i++)
		scanf("%d",&num[i]);
	sort(num,num+N,c);
	for(int i=0;i<N;i++){
		mid=(i+N-1)/2;
		maxa=num[i]*p;
		s=mid;
		while(s<N){
			//printf("%d %d\n",s,maxa);
			if(num[N-1]<=maxa){
				s=N-1;
				break;
			}
			if(num[s]==maxa){
				for(;num[s]==maxa;s++);
				break;
			}
			else if(num[s]<maxa&&num[s+1]>maxa){
				break;
			}
			else if(num[s]>maxa){
				s=(i+s)/2;
				continue;
			}
			else{
				s=(s+N-1)/2;
				continue;
			}
		}
		temp = s-i;
		if(temp>maxn)
			maxn=temp;
	}
	printf("%d\n",maxn);
	return 0;
}