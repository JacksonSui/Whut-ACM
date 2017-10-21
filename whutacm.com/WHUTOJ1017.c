#include <stdio.h>
#include <math.h>

int main(){
	int m,n,i,j,cnt=0,tot=0;
	scanf("%d%d",&m,&n);
	if(m<1||n>500||m>n){
		printf("输入数据错误\n");
		return 0;
	}
	for(i=(m==1)?2:m;i<=n;i++){
		for(j=2;j<=sqrt(i);j++)
			if(i%j==0)
				break;
		if(j>sqrt(i)){
			cnt++;
			tot+=i;
//			printf("%d %d\n",i,tot);
		}
	}
	printf("%d %d\n",cnt,tot);
}