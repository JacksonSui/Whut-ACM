#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
typedef long long LL;

typedef struct{
	char num[15];
	int grade;
}Stu;
using namespace std;

bool compare(const Stu& a,const Stu& b){
	if(a.grade!=b.grade)
		return a.grade>b.grade;
	else
		return strcmp(a.num,b.num)<0;		
}

int main(){
	vector<Stu> stu;
	Stu stemp;
	while(1){
		scanf("%s %d",stemp.num,&stemp.grade);
		if(!(atoi(stemp.num)||stemp.grade))
			break;
		stu.push_back(stemp);
	}
	sort(stu.begin(),stu.end(),compare);
	for(auto &s:stu)
		printf("%s %d\n",s.num,s.grade);
	return 0;
}