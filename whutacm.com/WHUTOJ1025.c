#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct {
	int num;
	double val;
	double single;
}Mooncake;

bool compare(const Mooncake &a,const Mooncake &b){
	return a.single>b.single;
}

int main(){
	int N,D;
	double W=0;
	scanf("%d %d",&N,&D);
	Mooncake m[N];
	for(int i=0;i<N;i++)
		scanf("%d",&m[i].num);
	for(int i=0;i<N;i++){
		scanf("%lf",&m[i].val);
		m[i].single=m[i].val/m[i].num;
	}
	sort(m,m+N,compare);
	//printf("%lf\n",m[0].single);
	for(int i=0;i<N;i++){
		if(D>m[i].num){
			W+=m[i].val;
			D-=m[i].num;
		}
		else{
			W+=m[i].single*D;
			break;
		}
	}
	printf("%.2lf\n",W);
}