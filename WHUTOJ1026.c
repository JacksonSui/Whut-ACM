#include <cstdio>
#include <algorithm>
using namespace std;

typedef struct {
	int x;
	int y;
}Point;

bool c(const Point &a,const Point &b){
	return a.x>b.x;
}

int main(){
	int N,cnt=1;
	scanf("%d",&N);
	Point p[N];
	for(int i=0;i<N;i++)
		scanf("%d%d",&p[i].x,&p[i].y);
	sort(p,p+N,c);
	int t=p[0].x;
	for(int i=0;i<N;i++){
		if(t>=p[i].y){
			t=p[i].x;
			cnt++;
		}
	}
	printf("%d\n",cnt);
}