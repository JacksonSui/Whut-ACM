#include <cstdio>
#include <algorithm>
using namespace std;
typedef struct {
	int num;
	int de;
	int cai;
	int tot;
	int lev;
}Student;

bool c1(const Student &a,const Student &b){
	return a.lev<b.lev;
}

bool c2(const Student &a,const Student &b){
	if(a.tot!=b.tot)
		return a.tot>b.tot;
	else if(a.de!=b.de)
		return a.de>b.de;
	else 
		return a.num<b.num;
}

int main() {
	int N, L, H, aval = 0;
	scanf("%d %d %d", &N, &L, &H);
	aval = N;
	Student s[N];
	int c[5] = { 0 };
	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &s[i].num, &s[i].de, &s[i].cai);
		s[i].tot = s[i].de + s[i].cai;
		if (s[i].de >= L&&s[i].cai >= L) {
			if (s[i].de >= H&&s[i].cai >= H)
				s[i].lev = 1,c[0]++;
			else if (s[i].de >= H)
				s[i].lev = 2,c[1]++;
			else if (s[i].de >= s[i].cai)
				s[i].lev = 3,c[2]++;
			else
				s[i].lev = 4,c[3]++;
		}
		else
			s[i].lev = 5, c[4]++,aval--;
	}
	printf("%d\n",aval);
	sort(s, s+N, c1);
	sort(s,s+c[0],c2);
	sort(s+c[0],s+c[0]+c[1],c2);
	sort(s+c[0]+c[1],s+c[0]+c[1]+c[2],c2);
	sort(s+c[0]+c[1]+c[2],s+aval,c2);
	for(int i=0;i<aval;i++)
		printf("%d %d %d\n", s[i].num,s[i].de,s[i].cai);
}