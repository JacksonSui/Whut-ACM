#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

bool compare(const char& a, const char& b){
	return a>b;
}

char *itoa(int n){
	char *num = (char *)malloc(5*sizeof(char));
	int t;
	for(int i=0;i<4;i++){
		t = n/pow(10,3-i);
		num[i] = '0' + t;
		n -= t*pow(10,3-i);
	}
	num[4]='\0';
	return num;
}

int main(){
	char *num = (char *)malloc(5*sizeof(char));
	for(int i=0;i<4;i++)
		num[i]=getchar();
	int s1,s2,ans;
	do{
		sort(num,num+4,compare);
		s1=atoi(num);
		sort(num,num+4);
		num[4]='\0';
		s2=atoi(num);
		if(s1==s2){
			printf("%d - %d = 0000\n",s1,s2);
			break;
		}
		else{
			ans=s1-s2;
			printf("%d - %s = %d",s1,num,ans);
			if(ans!=6174)
				printf("\n");
			num = itoa(ans);
		}
	}while(ans!=6174);
}